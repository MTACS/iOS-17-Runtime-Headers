
@interface PPXPCClientPipelinedBatchQueryContext : NSObject {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _calledFinalizeBlock;
    id /* block */  _finalizeCall;
    id /* block */  _handleBatch;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _stop;
}

@property (nonatomic, copy) id /* block */ handleBatch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)description;
- (void)finalizeCallWithSuccess:(bool)arg1 error:(id)arg2;
- (id /* block */)handleBatch;
- (id)queue;
- (void)setFinalizeCall:(id /* block */)arg1;
- (void)setHandleBatch:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
