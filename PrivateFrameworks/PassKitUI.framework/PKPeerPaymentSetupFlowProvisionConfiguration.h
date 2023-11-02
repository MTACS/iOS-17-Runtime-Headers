
@interface PKPeerPaymentSetupFlowProvisionConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration> {
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSetupDelegate:(id)arg1;
- (unsigned long long)peerPaymentSetupConfigurationType;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;

@end
