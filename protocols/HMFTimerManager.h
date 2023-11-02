
@protocol HMFTimerManager <NSObject>

@required

- (void)cancelTimerForContext:(id <HMFTimerManagerTimerContext>)arg1;
- (<HMFTimerManagerDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)setDelegate:(id <HMFTimerManagerDelegate>)arg1;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (<HMFTimerManagerTimerContext> *)startTimerWithTimeInterval:(double)arg1 andReplaceObject:(NSObject *)arg2;
- (<HMFTimerManagerTimerContext> *)startTimerWithTimeInterval:(double)arg1 object:(NSObject *)arg2;

@end
