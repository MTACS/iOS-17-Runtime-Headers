
@interface NPKPaymentProvisioningFlowControllerPreconditionsStepContext : NPKPaymentProvisioningFlowStepContext {
    unsigned long long  _preconditionsState;
}

@property (nonatomic) unsigned long long preconditionsState;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (unsigned long long)preconditionsState;
- (void)setPreconditionsState:(unsigned long long)arg1;

@end
