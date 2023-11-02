
@interface PLBoundedConcurrentQueue : NSObject {
    NSObject<OS_dispatch_semaphore> * _bound;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSObject<OS_dispatch_queue> * _submissionQueue;
}

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (id)initWithName:(id)arg1 concurrencyLimit:(unsigned char)arg2;
- (void)sync:(id /* block */)arg1;

@end
