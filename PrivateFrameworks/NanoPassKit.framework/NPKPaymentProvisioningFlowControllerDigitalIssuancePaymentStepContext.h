
@interface NPKPaymentProvisioningFlowControllerDigitalIssuancePaymentStepContext : NPKPaymentProvisioningFlowStepContext {
    PKPaymentSetupProduct * _product;
}

@property (nonatomic, retain) PKPaymentSetupProduct *product;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)product;
- (void)setProduct:(id)arg1;

@end
