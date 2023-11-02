
@interface UISHandleRemoteNotificationAction : BSAction

- (unsigned long long)UIActionType;
- (id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(unsigned long long)arg4 withHandler:(id /* block */)arg5;
- (id)action;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(id /* block */)arg3;
- (id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(id /* block */)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)payload;
- (void)sendResponse:(id)arg1;
- (id)userResponse;

@end
