
@protocol NCNotificationManagementContentProviderDelegate <NSObject>

@required

- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withPresentingView:(UIView *)arg4;

@end
