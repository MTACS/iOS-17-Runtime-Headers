
@interface _UIDialogForAddingKeyboard : NSObject {
    UIWindow * _presenterWindow;
    UINavigationController * _privacySheetController;
}

+ (void)presentDialogForAddingKeyboard;

- (void).cxx_destruct;
- (void)dismiss;
- (void)presentDialogForAddingKeyboard;
- (void)presentPrivacySheet;

@end
