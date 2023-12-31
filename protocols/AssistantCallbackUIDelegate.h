
@protocol AssistantCallbackUIDelegate

@required

- (void)callbackAskCancel;

@optional

- (int)callbackAskUserAQuestion:(int)arg1 paramDict:(NSDictionary *)arg2 forController:(AssistantCallbackController *)arg3;
- (int)callbackAskUserForPassword:(int)arg1 param:(NSString *)arg2 forController:(AssistantCallbackController *)arg3;
- (int)callbackAskUserForSetupCode:(int)arg1 isRetry:(bool)arg2 forController:(AssistantCallbackController *)arg3;
- (int)callbackAskUserForUncertifiedForController:(AssistantCallbackController *)arg1;
- (int)callbackAskUserToChooseFromStringList:(NSArray *)arg1 context:(int)arg2 forController:(AssistantCallbackController *)arg3;

@end
