
@protocol NCExpandedPlatterViewControllerDelegate <NCNotificationCustomContentDelegate>

@optional

- (long long)expandedPlatterViewController:(NCExpandedPlatterViewController *)arg1 dateFormatStyleForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)expandedPlatterViewController:(NCExpandedPlatterViewController *)arg1 requestsDismissalWithReason:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (<NCNotificationStaticContentProviding> *)expandedPlatterViewController:(NCExpandedPlatterViewController *)arg1 staticContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;

@end
