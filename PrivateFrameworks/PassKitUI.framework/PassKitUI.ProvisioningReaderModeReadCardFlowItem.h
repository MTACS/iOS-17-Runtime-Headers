
@interface PassKitUI.ProvisioningReaderModeReadCardFlowItem : NSObject <PKProvisioningReaderModeViewControllerDelegate> {
    void context;
    void coordinator;
    void delegate;
    void fieldsModel;
    void identifier;
    void product;
    void provisioningResult;
}

- (void).cxx_destruct;
- (id)init;
- (void)provisionWithFieldModel:(id)arg1 paymentCredential:(id)arg2;
- (id)provisionedPass;
- (void)viewControllerDidCancel:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (void)viewControllerDidFailIngestion:(id)arg1;

@end
