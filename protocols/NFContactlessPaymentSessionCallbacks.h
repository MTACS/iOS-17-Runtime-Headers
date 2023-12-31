
@protocol NFContactlessPaymentSessionCallbacks <NFContactlessSessionCallbacks>

@required

- (void)didEndTransaction:(NFContactlessPaymentEndEvent *)arg1;
- (void)didExpireTransactionForApplet:(NSString *)arg1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(NSDictionary *)arg1;
- (void)didStartTransaction:(NFContactlessPaymentStartEvent *)arg1;

@optional

- (void)didExpressModeStateChange:(unsigned int)arg1 withObject:(NSString *)arg2;
- (void)didPerformValueAddedServiceTransactions:(NSArray *)arg1;
- (void)didReceiveActivityTimeout:(NSString *)arg1;
- (void)didReceivePendingServerRequest;
- (void)didSelectValueAddedService:(bool)arg1;

@end
