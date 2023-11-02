
@protocol _GCDevicePhysicalInputDataSource <NSObject>

@required

- (void)physicalInput:(_GCDevicePhysicalInput *)arg1 setQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)physicalInputPoll:(_GCDevicePhysicalInput *)arg1 forLatest:(bool)arg2;
- (NSObject<OS_dispatch_queue> *)physicalInputQueue:(_GCDevicePhysicalInput *)arg1;
- (void)physicalInputTransactionQueueDepthDidChange:(_GCDevicePhysicalInput *)arg1;
- (_GCDevicePhysicalInputBase *)physicalInputWithAttributes:(NSSet *)arg1;

@end
