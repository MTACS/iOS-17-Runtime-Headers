
@protocol PKPaymentSetupCredentialsSectionControllerDelegate <NSObject>

@required

- (void)credentialSelectionDidChange;
- (void)presentRefundFlowForCredential:(PKPaymentCredential *)arg1;
- (void)presentUnavailableDetailsForCredential:(PKPaymentCredential *)arg1;
- (void)setShowNoResultsView:(bool)arg1;
- (void)showCredentialDeletionError;
- (void)showDeleteConfirmationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showMaxSelectionAlertForCredential:(PKPaymentCredential *)arg1;
- (void)showUnableToDeleteCredentialError;
- (void)showUnableToDeleteSafariCredentialError;

@end
