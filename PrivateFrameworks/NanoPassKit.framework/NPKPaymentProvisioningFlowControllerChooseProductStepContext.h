
@interface NPKPaymentProvisioningFlowControllerChooseProductStepContext : NPKPaymentProvisioningFlowStepContext {
    NSArray * _products;
}

@property (nonatomic, retain) NSArray *products;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)products;
- (void)setProducts:(id)arg1;

@end
