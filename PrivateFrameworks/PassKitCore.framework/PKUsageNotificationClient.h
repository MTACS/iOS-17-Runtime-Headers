
@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface> {
    PKXPCService * _connection;
    id /* block */  _handler;
    id /* block */  _paymentHandler;
    id /* block */  _paymentPassUsageHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)setPassUsageHandler:(id /* block */)arg1;
- (void)setPaymentPassUsageHandler:(id /* block */)arg1;
- (void)setPaymentUsageHandler:(id /* block */)arg1;
- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3;
- (void)usedPaymentPassWithTransactionIdentifier:(id)arg1 info:(id)arg2;
- (void)usedPaymentPassWithUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3;

@end
