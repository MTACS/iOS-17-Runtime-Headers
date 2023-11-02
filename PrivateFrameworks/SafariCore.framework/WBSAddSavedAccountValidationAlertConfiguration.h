
@interface WBSAddSavedAccountValidationAlertConfiguration : NSObject

+ (id)alertDismissActionTitleForFailedAccountCreation;
+ (id)alertSubtitleForFailedAccountCreationWithErrorCode:(long long)arg1 forUserTypedSite:(id)arg2 userTypedUsername:(id)arg3 highLevelDomain:(id)arg4;
+ (id)alertTitleForFailedAccountCreationWithErrorCode:(long long)arg1;
+ (id)alertUnknownErrorStringForFailedAccountCreation;

@end
