
@interface NPKPaymentProvisioningFlowControllerProvisioningProgressStepContext : NPKPaymentProvisioningFlowStepContext {
    NSString * _localizedProgressDescription;
    PKPaymentSetupProduct * _product;
}

@property (nonatomic, retain) NSString *localizedProgressDescription;
@property (nonatomic, retain) PKPaymentSetupProduct *product;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)arg1;
- (id)localizedProgressDescription;
- (id)product;
- (void)setLocalizedProgressDescription:(id)arg1;
- (void)setProduct:(id)arg1;

@end
