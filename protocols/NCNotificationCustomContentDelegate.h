
@protocol NCNotificationCustomContentDelegate <NSObject>

@required

- (void)customContent:(id <NCNotificationCustomContent>)arg1 forwardAction:(NCNotificationAction *)arg2 forNotification:(NCNotificationRequest *)arg3 withUserInfo:(NSDictionary *)arg4;
- (void)customContent:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 forNotification:(void *)arg3 withUserInfo:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: <NCNotificationCustomContent> *, NCNotificationAction *, NCNotificationRequest *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)customContentRequestsDefaultAction:(id <NCNotificationCustomContent>)arg1;
- (void)customContentRequestsDismiss:(id <NCNotificationCustomContent>)arg1;

@optional

- (void)customContent:(id <NCNotificationCustomContent>)arg1 didUpdateUserNotificationActions:(NSArray *)arg2;
- (void)customContentDidLoadExtension:(id <NCNotificationCustomContent>)arg1;
- (void)customContentDidUpdateTitle:(id <NCNotificationCustomContent>)arg1;

@end
