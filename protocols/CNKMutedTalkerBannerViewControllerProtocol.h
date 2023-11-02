
@protocol CNKMutedTalkerBannerViewControllerProtocol <NSObject>

@required

- (<CNKMutedTalkerBannerViewControllerDelegate> *)delegate;
- (void)dismissBanner;
- (void)playBannerSound;
- (void)setDelegate:(id <CNKMutedTalkerBannerViewControllerDelegate>)arg1;
- (void)showBanner;
- (void)updatePillViewWithIsMuted:(bool)arg1;

@end
