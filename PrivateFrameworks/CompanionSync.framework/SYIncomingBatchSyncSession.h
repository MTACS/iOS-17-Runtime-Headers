
@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession {
    id /* block */  _completion;
    bool  _hasReceivedEndSync;
    NSMutableArray * _incomingBatchQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueLock;
    NSMutableIndexSet * _receivedBatchIndices;
    NSObject<OS_dispatch_source> * _sessionTimer;
    bool  canRestart;
    bool  canRollback;
}

- (void).cxx_destruct;
- (void)_continueProcessing;
- (void)_handleBatchChunk:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleEndSync:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendEndSessionResponse:(id)arg1;
- (bool)canRestart;
- (bool)canRollback;
- (id)initWithService:(id)arg1;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;

@end
