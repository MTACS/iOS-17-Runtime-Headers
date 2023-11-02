
@interface SYDocumentWorkflowsCloseConfirmationSettings : NSObject {
    bool  _didRegisterConfirmationDialogNotifier;
    long long  _registrationToken;
}

- (void)dealloc;
- (void)registerCustomCloseConfirmationSettings;

@end
