
@interface PKWalletTransactionSignal : NSObject

+ (void)_donateSignalForPass:(id)arg1 transactionType:(int)arg2 transactionDate:(id)arg3 transactionID:(id)arg4 merchantCategory:(long long)arg5 merchantDetailedCategory:(id)arg6 queue:(id)arg7 completion:(id /* block */)arg8;
+ (void)donateSignalForPass:(id)arg1 transaction:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)donateSignalForPass:(id)arg1 transactionType:(int)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (bool)walletTransactionTriggerEnabled;

@end
