
@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void).cxx_destruct;
- (id)init;
- (void)signal;
- (void)wait;

@end
