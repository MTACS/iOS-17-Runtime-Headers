
@interface PKPaymentSessionHandle : NSObject {
    NSObject<OS_dispatch_queue> * _internalSessionSerialQueue;
    PKTransactionSessionWrapper * _sessionHandle;
}

- (void).cxx_destruct;
- (id)initWithInternalSessionHandle:(id)arg1 targetQueue:(id)arg2;
- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(id /* block */)arg1;
- (bool)isFirstInQueue;

@end
