
@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext {
    NSArray * _moreInfoItems;
    PKPaymentPass * _paymentPass;
}

@property (nonatomic, retain) NSArray *moreInfoItems;
@property (nonatomic, retain) PKPaymentPass *paymentPass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;
- (id)moreInfoItems;
- (id)paymentPass;
- (void)setMoreInfoItems:(id)arg1;
- (void)setPaymentPass:(id)arg1;

@end
