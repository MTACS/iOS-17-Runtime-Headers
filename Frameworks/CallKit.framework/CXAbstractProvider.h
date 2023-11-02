
@interface CXAbstractProvider : NSObject <CXAbstractProvider, CXActionDelegate> {
    id /* block */  _connectionInterruptionHandler;
    <CXAbstractProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    <CXActionDelegateInternal> * _internalActionDelegate;
    NSMutableArray * _mutablePendingTransactions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) id /* block */ connectionInterruptionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXAbstractProviderDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CXActionDelegateInternal> *internalActionDelegate;
@property (nonatomic, readonly) NSMutableArray *mutablePendingTransactions;
@property (nonatomic, readonly, copy) NSArray *pendingTransactions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_pendingActionWithUUID:(id)arg1;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (void)_syncSetDelegate:(id)arg1 queue:(id)arg2;
- (void)_updatePendingTransactions;
- (void)actionCompleted:(id)arg1;
- (id /* block */)connectionInterruptionHandler;
- (id)delegate;
- (id)delegateQueue;
- (void)handleConnectionInterruptionForProvider:(id)arg1;
- (id)init;
- (id)internalActionDelegate;
- (void)invalidate;
- (id)mutablePendingTransactions;
- (id)pendingTransactions;
- (void)performDelegateCallback:(id /* block */)arg1;
- (void)provider:(id)arg1 commitTransaction:(id)arg2;
- (void)provider:(id)arg1 handleTimeoutForAction:(id)arg2;
- (id)queue;
- (void)sendDidBeginForProvider:(id)arg1;
- (void)setConnectionInterruptionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setInternalActionDelegate:(id)arg1;

@end
