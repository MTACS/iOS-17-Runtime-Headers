
@interface TIAssistantSettings : NSObject

+ (void)connectForOperations:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
+ (void)dismissDialog;
+ (void)dismissEnableDataSharingPrompt;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissedDataSharingWithResponse:(long long)arg1;
+ (void)launchDictationSettings;
+ (void)launchKeyboardSettings;
+ (void)launchPencilSettings;
+ (void)presentDialogForType:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)arg1;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)arg1;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)arg1;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)arg1;
+ (void)setTestBlock:(id /* block */)arg1;

@end
