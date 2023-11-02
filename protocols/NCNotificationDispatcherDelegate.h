
@protocol NCNotificationDispatcherDelegate <NSObject>

@required

- (void)dispatcher:(NCNotificationDispatcher *)arg1 didExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 launchBackgroundApplicationForAction:(NCNotificationAction *)arg2 notificationRequest:(NCNotificationRequest *)arg3 fromDestination:(NSString *)arg4 withParameters:(NSDictionary *)arg5;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 launchForegroundApplicationForAction:(NCNotificationAction *)arg2 notificationRequest:(NCNotificationRequest *)arg3 fromDestination:(NSString *)arg4 withParameters:(NSDictionary *)arg5;
- (void)dispatcher:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 forDestination:(void *)arg3 notificationRequest:(void *)arg4 withParameters:(void *)arg5 completionBlock:(void *)arg6; // needs 6 arg types, found 11: NCNotificationDispatcher *, NCNotificationAction *, <NCNotificationDestination> *, NCNotificationRequest *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)dispatcher:(void *)arg1 willExecuteAction:(void *)arg2 forDestination:(void *)arg3 notificationRequest:(void *)arg4 requestAuthentication:(void *)arg5 withParameters:(void *)arg6 completionBlock:(void *)arg7; // needs 7 arg types, found 12: NCNotificationDispatcher *, NCNotificationAction *, <NCNotificationDestination> *, NCNotificationRequest *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
