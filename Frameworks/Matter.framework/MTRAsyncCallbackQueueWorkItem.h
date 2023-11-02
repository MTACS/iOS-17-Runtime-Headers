
@interface MTRAsyncCallbackQueueWorkItem : NSObject {
    bool  _batchable;
    id  _batchableData;
    id /* block */  _batchingHandler;
    unsigned long long  _batchingID;
    id /* block */  _cancelHandler;
    id /* block */  _duplicateCheckHandler;
    unsigned long long  _duplicateTypeID;
    bool  _enqueued;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _readyHandler;
    unsigned long long  _retryCount;
    bool  _supportsDuplicateCheck;
    MTRAsyncCallbackWorkQueue * _workQueue;
}

@property (nonatomic, readonly) bool batchable;
@property (nonatomic, readonly) id batchableData;
@property (nonatomic, readonly) id /* block */ batchingHandler;
@property (nonatomic, readonly) unsigned long long batchingID;
@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic, readonly) id /* block */ duplicateCheckHandler;
@property (nonatomic, readonly) unsigned long long duplicateTypeID;
@property (nonatomic, readonly) bool enqueued;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ readyHandler;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, readonly) bool supportsDuplicateCheck;
@property (nonatomic, retain) MTRAsyncCallbackWorkQueue *workQueue;

- (void).cxx_destruct;
- (void)_invalidate;
- (bool)batchable;
- (id)batchableData;
- (id /* block */)batchingHandler;
- (unsigned long long)batchingID;
- (void)callReadyHandlerWithContext:(id)arg1;
- (void)cancel;
- (id /* block */)cancelHandler;
- (id /* block */)duplicateCheckHandler;
- (unsigned long long)duplicateTypeID;
- (void)endWork;
- (bool)enqueued;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)markedEnqueued;
- (id)queue;
- (id /* block */)readyHandler;
- (unsigned long long)retryCount;
- (void)retryWork;
- (void)setBatchingID:(unsigned long long)arg1 data:(id)arg2 handler:(id /* block */)arg3;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDuplicateTypeID:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)setReadyHandler:(id /* block */)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)supportsDuplicateCheck;
- (id)workQueue;

@end
