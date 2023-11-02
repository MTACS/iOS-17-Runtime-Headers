
@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (id)performAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (id)performAsync:(id /* block */)arg1;
- (id)queue;

@end
