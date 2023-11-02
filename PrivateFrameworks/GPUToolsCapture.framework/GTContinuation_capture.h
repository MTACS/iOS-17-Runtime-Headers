
@interface GTContinuation_capture : NSObject {
    id /* block */  block;
    bool  cancelled;
    NSObject<OS_dispatch_queue> * queue;
}

- (void)dealloc;
- (void)dispatch;
- (id)init;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;

@end
