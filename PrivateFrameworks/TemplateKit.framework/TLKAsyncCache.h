
@interface TLKAsyncCache : NSObject {
    NSCache * _cache;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _queuedCompletionHandlers;
}

@property (retain) NSCache *cache;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMapTable *queuedCompletionHandlers;

- (void).cxx_destruct;
- (id)cache;
- (void)clear;
- (void)computeObjectForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getCachedObjectIfAvailableForKey:(id)arg1;
- (void)getObjectForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (id)queuedCompletionHandlers;
- (void)setCache:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedCompletionHandlers:(id)arg1;

@end
