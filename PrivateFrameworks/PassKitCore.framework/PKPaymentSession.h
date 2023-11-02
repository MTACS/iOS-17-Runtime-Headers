
@interface PKPaymentSession : NSObject {
    PKTransactionSessionWrapper * _internalSession;
    NSObject<OS_dispatch_queue> * _internalSessionSerialQueue;
    unsigned long long  _lifecycleState;
}

@property (nonatomic, readonly) unsigned long long lifecycleState;

+ (id)forceContactlessInterfaceSessionWithCompletion:(id /* block */)arg1;
+ (id)forceContactlessInterfaceSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startApplePayTrustSessionWithCompletion:(id /* block */)arg1;
+ (id)startApplePayTrustSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)arg1;
+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startDigitalCarKeySessionWithCompletion:(id /* block */)arg1;
+ (id)startDigitalCarKeySessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startInAppSessionWithCompletion:(id /* block */)arg1;
+ (id)startInAppSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)arg1;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startReaderSessionWithCompletion:(id /* block */)arg1;
+ (id)startReaderSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startSTSContactlessInterfaceSessionWithDelegate:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)createSessionHandoffTokenWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(id /* block */)arg1;
- (unsigned long long)lifecycleState;
- (void)performBlockAsyncOnInternalSession:(id /* block */)arg1;
- (void)performBlockSyncOnInternalSession:(id /* block */)arg1;

@end
