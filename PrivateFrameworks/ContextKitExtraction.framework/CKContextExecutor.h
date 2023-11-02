
@interface CKContextExecutor : NSObject {
    NSCondition * _completionCondition;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id  _context;
    _Atomic bool  _done;
    NSObject<OS_dispatch_group> * _group;
    unsigned long long  _timeoutAfter;
    NSObject<OS_dispatch_queue> * _workItemQueue;
}

@property (nonatomic, readonly) id context;
@property (readonly) _Atomic bool done;

- (void).cxx_destruct;
- (void)_awaitCompletion;
- (void)addWorkItem:(id /* block */)arg1;
- (void)addWorkItem:(id /* block */)arg1 toQueue:(id)arg2;
- (void)addWorkItem:(id /* block */)arg1 withContext:(id)arg2;
- (void)addWorkItemToQueue:(id)arg1 withWorkItem:(id /* block */)arg2 andContext:(id)arg3;
- (id)context;
- (void)dealloc;
- (bool)done;
- (id)initWithContext:(id)arg1 workItemQueue:(id)arg2 completionQueue:(id)arg3 timeoutAfter:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)markIncomplete;
- (void)markReady;
- (void)markReadyAndAwaitCompletion;

@end
