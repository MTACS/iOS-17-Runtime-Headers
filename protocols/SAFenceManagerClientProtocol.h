
@protocol SAFenceManagerClientProtocol <NSObject>

@optional

- (void)addGeofence:(CLRegion *)arg1;
- (void)didDetermineState:(unsigned long long)arg1 forSafeLocation:(SASafeLocation *)arg2 forDevice:(NSUUID *)arg3;
- (void)didDetermineState:(unsigned long long)arg1 forUnsafeLocation:(CLRegion *)arg2 forDevice:(NSUUID *)arg3;
- (void)removeGeofence:(CLRegion *)arg1;

@end
