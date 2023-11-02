
@interface RPNearFieldController : NSObject <RPNearFieldXPCClientInterface> {
    RPNearFieldContext * _currentContext;
    long long  _currentPreferredPollingType;
    <RPNearFieldTransaction> * _currentTransaction;
    <RPNearFieldControllerDelegate> * _delegate;
    bool  _didStart;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly, copy) NSString *currentApplicationLabel;
@property (nonatomic, retain) RPNearFieldContext *currentContext;
@property (nonatomic) long long currentPreferredPollingType;
@property (nonatomic, retain) <RPNearFieldTransaction> *currentTransaction;
@property (nonatomic, readonly) <RPNearFieldControllerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (id)_exportedInterface;
- (void)_interrupted;
- (void)_invalidated;
- (id)_remoteObjectInterface;
- (id)_remoteObjectProxy;
- (void)_startPolling;
- (id)currentApplicationLabel;
- (id)currentContext;
- (long long)currentPreferredPollingType;
- (id)currentTransaction;
- (id)delegate;
- (void)didBeginTransaction:(id)arg1;
- (void)didDetectDeviceNearbyWithInitiatorRole:(bool)arg1;
- (void)didInterruptTransaction:(id)arg1 withError:(id)arg2;
- (void)didUpdateTransaction:(id)arg1;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)invalidateTransaction:(id)arg1;
- (void)invalidateTransaction:(id)arg1 context:(id)arg2;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentPreferredPollingType:(long long)arg1;
- (void)setCurrentTransaction:(id)arg1;
- (void)startPolling:(long long)arg1 context:(id)arg2;
- (void)startPolling:(long long)arg1 forApplicationLabel:(id)arg2;
- (void)stop;
- (id)xpcConnection;

@end
