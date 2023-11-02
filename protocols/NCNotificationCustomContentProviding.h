
@protocol NCNotificationCustomContentProviding <NSObject>

@required

- (UIViewController<NCNotificationCustomContent> *)customContentViewControllerForNotificationRequest:(NCNotificationRequest *)arg1;

@end
