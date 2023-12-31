
@protocol NCNotificationCustomContent <NSObject>

@required

- (bool)allowManualDismiss;
- (unsigned long long)customContentLocation;
- (bool)defaultContentHidden;
- (<NCNotificationCustomContentDelegate> *)delegate;
- (bool)didReceiveNotificationRequest:(NCNotificationRequest *)arg1;
- (bool)overridesDefaultTitle;
- (bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2;
- (bool)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)setDelegate:(id <NCNotificationCustomContentDelegate>)arg1;
- (NSString *)title;
- (bool)userInteractionEnabled;

@optional

- (id)cancelTouches;
- (NSString *)contentExtensionIdentifier;
- (void)playMedia;
- (void)preserveInputViews;
- (bool)restoreInputViews;

@end
