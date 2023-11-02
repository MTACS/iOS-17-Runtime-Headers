
@interface NPKPaymentProvisioningFlowControllerAppleBalanceAccountDetailsStepContext : NPKPaymentProvisioningFlowStepContext {
    NSString * _appleID;
    PKCurrencyAmount * _balance;
}

@property (nonatomic, retain) NSString *appleID;
@property (nonatomic, retain) PKCurrencyAmount *balance;

- (void).cxx_destruct;
- (id)appleID;
- (id)balance;
- (id)description;
- (id)initWithRequestContext:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setBalance:(id)arg1;

@end
