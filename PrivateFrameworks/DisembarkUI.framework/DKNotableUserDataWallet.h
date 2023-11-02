
@interface DKNotableUserDataWallet : NSObject {
    NSArray * _localPaymentCards;
    PKPaymentSetupAssistantProvisioningContext * _paymentProvisioningContext;
}

@property (nonatomic, retain) NSArray *localPaymentCards;
@property (nonatomic, retain) PKPaymentSetupAssistantProvisioningContext *paymentProvisioningContext;
@property (nonatomic, readonly) NSArray *walletCards;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 localCards:(id)arg2;
- (id)localPaymentCards;
- (id)passSnapshotForCredential:(id)arg1;
- (id)paymentProvisioningContext;
- (void)setLocalPaymentCards:(id)arg1;
- (void)setPaymentProvisioningContext:(id)arg1;
- (id)walletCards;

@end
