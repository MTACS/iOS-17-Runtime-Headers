
@protocol _GCDevicePhysicalInputGroupDataSource <NSObject>

@required

- (void)physicalInputGroupPoll:(_GCDevicePhysicalInputGroup *)arg1 forLatest:(bool)arg2;
- (void)physicalInputGroupPreferredTransactionQueueDepthDidChange:(_GCDevicePhysicalInputGroup *)arg1;
- (void)physicalInputGroupQueueDidChange:(_GCDevicePhysicalInputGroup *)arg1;

@end
