
@interface SKRequestInternal : NSObject {
    long long  _backgroundTaskIdentifier;
    SKPaymentQueueClient * _client;
    SKXPCConnection * _connection;
    <SKRequestDelegate> * _delegate;
    long long  _state;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
