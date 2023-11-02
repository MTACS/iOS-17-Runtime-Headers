
@protocol SFFormAutoFillControllerDelegate <NSObject>

@required

- (bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;

@optional

- (WBSSavedAccountContext *)currentSavedAccountContextForFormAutoFillController:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerDidFocusSensitiveFormField:(_SFFormAutoFillController *)arg1;
- (bool)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _SFFormAutoFillController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, LAContext *, void*
- (bool)formAutoFillControllerShouldDisableStreamlinedLogin:(_SFFormAutoFillController *)arg1;
- (bool)formAutoFillControllerShouldShowIconsInPasswordPicker:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerUserChoseToUseGeneratedPassword:(_SFFormAutoFillController *)arg1;

@end
