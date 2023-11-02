
@protocol NPKCompanionClientProtocol <NSObject>

@required

- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateBalanceReminder:(PKPaymentBalanceReminder *)arg2 forBalance:(PKPaymentBalance *)arg3;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithBalances:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithCredentials:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitPassProperties:(PKTransitPassProperties *)arg2;
- (void)transactionSourceIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)transactionSourceIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;

@end
