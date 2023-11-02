
@interface CalLimitingQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

- (void).cxx_destruct;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(id /* block */)arg2;
- (id)queue;

@end
