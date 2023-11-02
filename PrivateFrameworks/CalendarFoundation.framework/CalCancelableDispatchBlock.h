
@interface CalCancelableDispatchBlock : NSObject <CalCancelable> {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancel;
- (id)initWithBlock:(id /* block */)arg1 inQueue:(id)arg2;
- (void)performAfterDelay:(double)arg1;
- (void)performAsync;
- (id)queue;
- (void)setBlock:(id /* block */)arg1;

@end
