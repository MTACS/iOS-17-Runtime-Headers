
@interface NPKPaymentWebServiceStandaloneTargetDevice : PKPaymentWebServiceTargetDevice {
    <NPKPaymentWebServiceStandaloneTargetDeviceDelegate> * _delegate;
}

@property (nonatomic) <NPKPaymentWebServiceStandaloneTargetDeviceDelegate> *delegate;

+ (id)standalonePaymentWebServiceWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(bool)arg1;

@end
