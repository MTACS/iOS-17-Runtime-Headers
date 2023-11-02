
@interface WFCompactThumbnailViewController : UIViewController {
    bool  _contentHeightLikelyToChange;
    <WFCompactThumbnailViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) bool contentHeightLikelyToChange;
@property (nonatomic) <WFCompactThumbnailViewControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long preferredContentMode;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (double)contentHeightForWidth:(double)arg1;
- (bool)contentHeightLikelyToChange;
- (id)delegate;
- (void)invalidateContentSize;
- (unsigned long long)preferredContentMode;
- (void)setDelegate:(id)arg1;

@end
