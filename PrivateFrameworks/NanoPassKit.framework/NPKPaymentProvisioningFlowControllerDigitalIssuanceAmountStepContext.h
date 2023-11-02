
@interface NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _allowsReaderModeEntry;
    PKPaymentSetupProduct * _product;
}

@property (nonatomic) bool allowsReaderModeEntry;
@property (nonatomic, retain) PKPaymentSetupProduct *product;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsReaderModeEntry;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)product;
- (void)setAllowsReaderModeEntry:(bool)arg1;
- (void)setProduct:(id)arg1;

@end
