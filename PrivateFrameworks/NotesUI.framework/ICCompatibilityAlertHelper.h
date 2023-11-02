
@interface ICCompatibilityAlertHelper : NSObject

+ (id)oneTimeAlertKeyForAccount:(id)arg1;
+ (void)showAttachmentCompatibilityAlertInAccountIfNeeded:(id)arg1 parentViewController:(id)arg2 completion:(id /* block */)arg3;
+ (void)showCompatibilityAlertForAccountIfNeeded:(id)arg1 title:(id)arg2 alertMessage:(id)arg3 defaultButtonTitle:(id)arg4 secondaryButtonTitle:(id)arg5 postscript:(id)arg6 parentViewController:(id)arg7 hasShownAlertKey:(id)arg8 minimumNotesVersion:(long long)arg9 completion:(id /* block */)arg10;
+ (void)showCompatibilityAlertForInlineAttachmentsInAccountIfNeeded:(id)arg1 parentViewController:(id)arg2 completion:(id /* block */)arg3;
+ (void)showCompatibilityAlertWithDeviceMessage:(id)arg1 title:(id)arg2 alertMessage:(id)arg3 defaultButtonTitle:(id)arg4 secondaryButtonTitle:(id)arg5 postscript:(id)arg6 parentViewController:(id)arg7 completion:(id /* block */)arg8;
+ (void)suppressOneTimeAttachmentUpgradeAlertForAcccount:(id)arg1;

@end
