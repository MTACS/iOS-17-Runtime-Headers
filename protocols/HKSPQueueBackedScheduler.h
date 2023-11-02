
@protocol HKSPQueueBackedScheduler <HKSPScheduler>

@required

- (NSObject<OS_dispatch_queue> *)queue;

@end
