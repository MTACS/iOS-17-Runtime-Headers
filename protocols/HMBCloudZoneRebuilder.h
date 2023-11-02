
@protocol HMBCloudZoneRebuilder

@required

- (void)handleIdentityLost;
- (void)handleZoneChanged;
- (bool)isZoneRebuildInProgress;
- (void)rebuild;
- (NAFuture *)rebuildCompleteFuture;
- (HMBCloudZoneRebuilderStatus *)rebuilderStatus;
- (NAFuture *)zoneStartUp;

@end
