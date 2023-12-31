
@interface CMPocketStateQueueBlockPair : NSObject {
    id /* block */  fQueryBlock;
    NSObject<OS_dispatch_queue> * fQueryQueue;
}

- (void)dealloc;
- (void)dispatchWithState:(long long)arg1 andError:(id)arg2;
- (id)initWithQueue:(id)arg1 andBlock:(id /* block */)arg2;

@end
