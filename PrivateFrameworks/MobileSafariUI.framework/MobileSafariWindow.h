
@interface MobileSafariWindow : UIWindow {
    <MobileSafariWindowDelegate> * _safariWindowDelegate;
    bool  _safariWindowDelegateRespondsToDidEndAllTouchesAtPoint;
    bool  _safariWindowDelegateRespondsToStatusBarChangedFromHeightToHeight;
    bool  _shouldBecomeKeyWindowAfterSnapshot;
}

@property (nonatomic) <MobileSafariWindowDelegate> *safariWindowDelegate;

- (void).cxx_destruct;
- (void)_didCompleteSystemSnapshot;
- (void)_willBeginSystemSnapshot;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (id)initWithWindowScene:(id)arg1;
- (id)safariWindowDelegate;
- (void)sendEvent:(id)arg1;
- (void)setSafariWindowDelegate:(id)arg1;

@end
