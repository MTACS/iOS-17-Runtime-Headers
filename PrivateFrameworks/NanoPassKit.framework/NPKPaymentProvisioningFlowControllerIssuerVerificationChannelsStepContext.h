
@interface NPKPaymentProvisioningFlowControllerIssuerVerificationChannelsStepContext : NPKPaymentProvisioningFlowStepContext {
    PKPaymentPass * _paymentPass;
    NSArray * _verificationChannels;
}

@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) NSArray *verificationChannels;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;
- (id)paymentPass;
- (void)setPaymentPass:(id)arg1;
- (void)setVerificationChannels:(id)arg1;
- (id)verificationChannels;

@end
