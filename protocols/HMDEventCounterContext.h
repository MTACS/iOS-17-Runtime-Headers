
@protocol HMDEventCounterContext

@required

- (void)counterChanged;
- (void)forceSave;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end
