
@interface NPKPaymentProvisioningFlowControllerManualEntryStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _cameraFirstProvisioningEnabled;
    NSArray * _setupFields;
}

@property (nonatomic) bool cameraFirstProvisioningEnabled;
@property (nonatomic, retain) NSArray *setupFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cameraFirstProvisioningEnabled;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (void)setCameraFirstProvisioningEnabled:(bool)arg1;
- (void)setSetupFields:(id)arg1;
- (id)setupFields;

@end
