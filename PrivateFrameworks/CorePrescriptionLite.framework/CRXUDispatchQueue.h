
@interface CRXUDispatchQueue : NSObject {
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)concurrentQueueWithName:(id)arg1;
+ (id)dispatchQueueWithQueue:(id)arg1;
+ (id)main;
+ (id)serialQueueWithName:(id)arg1;

- (void).cxx_destruct;
- (void)afterDelay:(double)arg1 dispatchAsync:(id /* block */)arg2;
- (id)debugDescription;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchBarrierAsync:(id /* block */)arg1;
- (void)dispatchBarrierSync:(id /* block */)arg1;
- (void)dispatchSync:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 name:(id)arg2;
- (id)name;
- (id)queue;

@end
