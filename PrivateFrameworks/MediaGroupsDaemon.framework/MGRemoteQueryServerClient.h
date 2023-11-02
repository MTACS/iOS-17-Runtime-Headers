
@interface MGRemoteQueryServerClient : NSObject <MGRemoteQueryServerTransactionDelegate> {
    <MGRemoteQueryServerClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidated;
    NSObject<OS_nw_endpoint> * _peer;
    unsigned long long  _timeout;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSArray * _transactions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _transactionsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MGRemoteQueryServerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidated;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *peer;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timeoutTimer;
@property (nonatomic, retain) NSArray *transactions;

- (void).cxx_destruct;
- (void)_delegateNotifyInvalidated;
- (void)_delegateNotifyLostTransaction;
- (void)_invalidate;
- (void)_invalidated;
- (void)_timerCancel;
- (void)_timerFired;
- (void)_timerInit;
- (void)_timerReschedule;
- (void)_transactionAdd:(id)arg1;
- (bool)_transactionExists:(id)arg1;
- (void)_transactionRemove:(id)arg1;
- (void)_withTransactionsLock:(id /* block */)arg1;
- (void)addNewConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dispatchQueue;
- (id)initWithPeer:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (bool)invalidated;
- (id)peer;
- (void)setInvalidated:(bool)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setTransactions:(id)arg1;
- (unsigned long long)timeout;
- (id)timeoutTimer;
- (void)transaction:(id)arg1 receivedTimeoutInterval:(unsigned long long)arg2;
- (void)transactionActivityOccurred:(id)arg1;
- (unsigned long long)transactionCount;
- (void)transactionInvalidated:(id)arg1;
- (id)transactions;

@end
