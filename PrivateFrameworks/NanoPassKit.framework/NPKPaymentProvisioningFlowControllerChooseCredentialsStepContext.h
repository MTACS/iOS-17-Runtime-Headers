
@interface NPKPaymentProvisioningFlowControllerChooseCredentialsStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _allowsManualEntry;
    NSArray * _credentials;
    NSDictionary * _flowIdentifierToCredential;
    NSArray * _flowIdentifiers;
    PKPaymentSetupProduct * _product;
}

@property (nonatomic) bool allowsManualEntry;
@property (nonatomic, copy) NSArray *credentials;
@property (nonatomic, retain) NSDictionary *flowIdentifierToCredential;
@property (nonatomic, retain) NSArray *flowIdentifiers;
@property (nonatomic, retain) PKPaymentSetupProduct *product;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsManualEntry;
- (id)credentials;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)flowIdentifierToCredential;
- (id)flowIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)product;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setCredentials:(id)arg1;
- (void)setFlowIdentifierToCredential:(id)arg1;
- (void)setFlowIdentifiers:(id)arg1;
- (void)setProduct:(id)arg1;

@end
