
@interface CalNWideQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void).cxx_destruct;
- (void)executeBlock:(id /* block */)arg1;
- (id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2;

@end
