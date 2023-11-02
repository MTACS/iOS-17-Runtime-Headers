
@protocol NPKQuickPaymentSessionDelegate <NSObject>

@optional

- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didActivatePass:(PKPass *)arg2;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didCompleteTransactionForReason:(unsigned long long)arg2 withTransactionContext:(PKContactlessInterfaceTransactionContext *)arg3 shouldCleanupSession:(bool)arg4;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didFailTransactionForPass:(PKPass *)arg2 withValueAddedServiceTransactions:(NSArray *)arg3 forValueAddedServicePasses:(NSArray *)arg4;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didMakePassCurrent:(PKPass *)arg2;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didReceive18013Request:(STSTransaction18013Request *)arg2 readerAuthInfo:(STS18013ReaderAuthInfo *)arg3;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 willActivatePass:(PKPass *)arg2;
- (void)paymentSessionDidEnterField:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidExitField:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveActivationError:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveActivityTimeout:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveAuthorizationTimeout:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveCredential:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveStartTransaction:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidReceiveTransactionError:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidSelectPayment:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidSelectValueAddedService:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidStart:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionIsWaitingToStart:(NPKQuickPaymentSession *)arg1;

@end
