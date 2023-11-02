
@interface AFUIStarkUtilities : NSObject

+ (long long)backgroundViewModeForRequestSource:(long long)arg1 directActionEvent:(long long)arg2;
+ (bool)isRequestForAnnnounceNotificationServerCommand:(id)arg1;
+ (bool)isRequestForAnnounceNotification:(id)arg1;
+ (bool)isRequestForMessageReadBannerTap:(id)arg1;
+ (bool)shouldPresentForNewRequest:(id)arg1 duringCurrentRequest:(id)arg2;
+ (bool)shouldStartNewRequest:(id)arg1 duringCurrentRequest:(id)arg2;

@end
