
@interface SKWeakContainer : NSObject {
    UIView * _scrollingView;
    UIView * _trackingView;
    bool  _wasOnScreen;
}

@property (nonatomic) UIView *scrollingView;
@property (nonatomic) UIView *trackingView;
@property (nonatomic) bool wasOnScreen;

- (void).cxx_destruct;
- (id)scrollingView;
- (void)setScrollingView:(id)arg1;
- (void)setTrackingView:(id)arg1;
- (void)setWasOnScreen:(bool)arg1;
- (id)trackingView;
- (bool)wasOnScreen;

@end
