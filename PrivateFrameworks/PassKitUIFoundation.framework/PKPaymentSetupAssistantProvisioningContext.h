
@interface PKPaymentSetupAssistantProvisioningContext : PKPaymentSetupAssistantCoreProvisioningContext {
    <PKPaymentSetupAssistantProvisioningContextDelegate> * _delegate;
    <PKPassSnapshotCoordinatorProtocol> * _snapshotCoordinator;
}

@property (nonatomic, retain) <PKPaymentSetupAssistantProvisioningContextDelegate> *delegate;
@property (nonatomic, retain) <PKPassSnapshotCoordinatorProtocol> *snapshotCoordinator;

- (void).cxx_destruct;
- (id)_setupAssistantCredentialForPaymentCredential:(id)arg1;
- (id)delegate;
- (id)initWithProvisioningController:(id)arg1 snapshotCoordinator:(id)arg2 setupAssistantCredentials:(id)arg3 maximumSelectable:(unsigned long long)arg4;
- (id)passSnapshotForCredential:(id)arg1;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnapshotCoordinator:(id)arg1;
- (id)setupAssistantCredentials;
- (id)snapshotCoordinator;

@end
