
@interface MTRAsyncCallbackWorkQueue : NSObject {
    id  _context;
    NSMutableArray * _items;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _runningWorkItemCount;
}

@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long runningWorkItemCount;

- (void).cxx_destruct;
- (void)_callNextReadyWorkItem;
- (void)_postProcessWorkItem:(id)arg1 retry:(bool)arg2;
- (id)context;
- (id)description;
- (void)endWork:(id)arg1;
- (void)enqueueWorkItem:(id)arg1;
- (id)initWithContext:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)isDuplicateForTypeID:(unsigned long long)arg1 workItemData:(id)arg2;
- (id)items;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)queue;
- (void)retryWork:(id)arg1;
- (unsigned long long)runningWorkItemCount;
- (void)setRunningWorkItemCount:(unsigned long long)arg1;

@end
