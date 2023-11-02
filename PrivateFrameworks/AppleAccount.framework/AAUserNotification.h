
@interface AAUserNotification : NSObject

+ (id)_defaultParameters;
+ (void)_waitForResponseAndReleaseNotification:(struct __CFUserNotification { }*)arg1 completion:(id /* block */)arg2;
+ (void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 withCompletionBlock:(id /* block */)arg5;
+ (void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 secureTextFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(id /* block */)arg6;
+ (void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 textFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(id /* block */)arg6;
+ (void)waitForResponseToNotification:(struct __CFUserNotification { }*)arg1 completion:(id /* block */)arg2;

@end
