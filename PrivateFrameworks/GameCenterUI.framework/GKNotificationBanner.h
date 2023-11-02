
@interface GKNotificationBanner : NSObject

+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4;
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5;
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5 shortBanner:(bool)arg6;
+ (id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3;
+ (bool)isBannerVisible;
+ (void)showAchievementBannerWithTitle:(id)arg1 achievementImage:(id)arg2 message:(id)arg3 touchHandler:(id /* block */)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(id /* block */)arg4;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(id /* block */)arg4;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(id /* block */)arg4;
+ (void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 touchHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
