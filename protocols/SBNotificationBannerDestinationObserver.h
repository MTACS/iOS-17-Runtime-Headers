
@protocol SBNotificationBannerDestinationObserver <NSObject>

@optional

- (void)notificationBannerDestination:(SBNotificationBannerDestination *)arg1 didPresentBannerForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationBannerDestinationDidDismissLongLook:(SBNotificationBannerDestination *)arg1;
- (void)notificationBannerDestinationDidPresentLongLook:(SBNotificationBannerDestination *)arg1;
- (void)notificationBannerDestinationWillDismissLongLook:(SBNotificationBannerDestination *)arg1;
- (void)notificationBannerDestinationWillPresentLongLook:(SBNotificationBannerDestination *)arg1;

@end
