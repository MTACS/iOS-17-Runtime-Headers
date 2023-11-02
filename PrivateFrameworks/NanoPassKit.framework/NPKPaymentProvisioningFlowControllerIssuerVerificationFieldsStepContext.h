
@interface NPKPaymentProvisioningFlowControllerIssuerVerificationFieldsStepContext : NPKPaymentProvisioningFlowStepContext {
    PKPaymentPass * _paymentPass;
    NSArray * _verificationFields;
}

@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) NSArray *verificationFields;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;
- (id)paymentPass;
- (void)setPaymentPass:(id)arg1;
- (void)setVerificationFields:(id)arg1;
- (id)verificationFields;

@end
