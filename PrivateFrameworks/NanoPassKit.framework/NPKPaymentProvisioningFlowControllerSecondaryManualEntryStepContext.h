
@interface NPKPaymentProvisioningFlowControllerSecondaryManualEntryStepContext : NPKPaymentProvisioningFlowControllerManualEntryStepContext {
    bool  _allowsAddingDifferentCard;
    PKPaymentCredential * _credential;
}

@property (nonatomic) bool allowsAddingDifferentCard;
@property (nonatomic, retain) PKPaymentCredential *credential;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsAddingDifferentCard;
- (id)credential;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (void)setAllowsAddingDifferentCard:(bool)arg1;
- (void)setCredential:(id)arg1;

@end
