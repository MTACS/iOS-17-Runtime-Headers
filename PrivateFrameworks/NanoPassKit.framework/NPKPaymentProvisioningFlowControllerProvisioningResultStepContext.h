
@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _cardAdded;
    NSError * _error;
    PKPaymentPass * _provisionedPass;
}

@property (nonatomic) bool cardAdded;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) PKPaymentPass *provisionedPass;

- (void).cxx_destruct;
- (bool)cardAdded;
- (id)description;
- (id)error;
- (id)initWithRequestContext:(id)arg1;
- (id)provisionedPass;
- (void)setCardAdded:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setProvisionedPass:(id)arg1;

@end
