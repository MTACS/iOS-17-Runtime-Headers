
@interface SFAutoFillAuthenticationUtilities : NSObject

+ (id)customAuthenticationTitleForFillingCreditCard;
+ (id)customAuthenticationTitleForFillingSavedPasskey;
+ (id)customAuthenticationTitleForFillingSavedPassword;
+ (id)customAuthenticationTitleForFillingTimeBasedOneTimeCode;
+ (id)customAuthenticationTitleForLoggingInWithSavedAccountOnWebsite:(id)arg1;
+ (id)customAuthenticationTitleForViewingSavedAccounts;
+ (id)passcodePromptForFillingCreditCard;
+ (id)passcodePromptForFillingSavedAccount;
+ (id)passcodePromptForFillingTimeBasedOneTimeCode;
+ (id)passcodePromptForLoggingInWithSavedAccountOnWebsite:(id)arg1;
+ (id)passcodePromptForViewingSavedAccounts;

@end
