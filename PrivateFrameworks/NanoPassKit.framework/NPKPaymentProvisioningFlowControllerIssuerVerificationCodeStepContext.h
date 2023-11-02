
@interface NPKPaymentProvisioningFlowControllerIssuerVerificationCodeStepContext : NPKPaymentProvisioningFlowStepContext {
    PKPaymentPass * _paymentPass;
    PKVerificationChannel * _verificationChannel;
}

@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) PKVerificationChannel *verificationChannel;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;
- (id)paymentPass;
- (void)setPaymentPass:(id)arg1;
- (void)setVerificationChannel:(id)arg1;
- (id)verificationChannel;

@end
