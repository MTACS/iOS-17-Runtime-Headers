
@interface CLSNotificationBannerWindow : UIWindow {
    NSObject<OS_dispatch_semaphore> * _bannerSemaphore;
    CLSNotificationBannerViewController * _currentBannerViewController;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *bannerSemaphore;
@property (nonatomic, retain) CLSNotificationBannerViewController *currentBannerViewController;

+ (id)bannerWindow;
+ (void)enqueBanner:(id)arg1;
+ (id)queue;

- (void).cxx_destruct;
- (bool)_canAffectStatusBarAppearance;
- (void)_hideBanner:(id)arg1 quickly:(bool)arg2;
- (bool)_includeInDefaultImageSnapshot;
- (void)_showBanner:(id)arg1;
- (id)bannerSemaphore;
- (id)currentBannerViewController;
- (void)handlePan:(id)arg1;
- (id)init;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBannerSemaphore:(id)arg1;
- (void)setCurrentBannerViewController:(id)arg1;

@end
