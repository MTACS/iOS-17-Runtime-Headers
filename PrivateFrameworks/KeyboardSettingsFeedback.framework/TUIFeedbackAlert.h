
@interface TUIFeedbackAlert : NSObject

+ (void)messageWithTitle:(id)arg1 message:(id)arg2 actionLabel:(id)arg3 parentController:(id)arg4 completion:(id /* block */)arg5;
+ (void)promptWithTitle:(id)arg1 message:(id)arg2 acceptActionLabel:(id)arg3 declineActionLabel:(id)arg4 parentController:(id)arg5 completion:(id /* block */)arg6;

@end
