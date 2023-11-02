
@interface NEUserNotification : NSObject {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _isAlert;
    id  _notification;
    id  _notificationSource;
}

+ (void)cancelCurrentNotificationWithResponse:(unsigned long long)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)shouldPromptForLocalAuthentication;

- (void).cxx_destruct;
- (void)cancel;
- (id)initAndShowAddConfigurationsForApp:(id)arg1 warningHeader:(const char *)arg2 warning:(const char *)arg3 callbackQueue:(id)arg4 callbackHandler:(id /* block */)arg5;
- (id)initAndShowAlertWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4 noBoldDefault:(bool)arg5 callbackQueue:(id)arg6 callbackHandler:(id /* block */)arg7;
- (id)initAndShowAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3 callbackQueue:(id)arg4 callbackHandler:(id /* block */)arg5;
- (id)initAndShowLocalNetworkAlertWithAppName:(id)arg1 reasonString:(id)arg2 callbackQueue:(id)arg3 callbackHandler:(id /* block */)arg4;

@end
