
@interface NPKPaymentProvisioningFlowControllerChooseFlowStepContext : NPKPaymentProvisioningFlowStepContext {
    NSArray * _sections;
}

@property (nonatomic, retain) NSArray *sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;

@end
