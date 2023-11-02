
@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _allowNonSecureHTTP;
    PKPaymentSetupProduct * _product;
    NSURL * _termsURL;
}

@property (nonatomic) bool allowNonSecureHTTP;
@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (nonatomic, retain) NSURL *termsURL;

- (void).cxx_destruct;
- (bool)allowNonSecureHTTP;
- (id)description;
- (id)initWithRequestContext:(id)arg1;
- (id)product;
- (void)setAllowNonSecureHTTP:(bool)arg1;
- (void)setProduct:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (id)termsURL;

@end
