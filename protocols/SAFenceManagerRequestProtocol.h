
@protocol SAFenceManagerRequestProtocol

@required

- (bool)startMonitorSafeLocation:(SASafeLocation *)arg1 forDevice:(NSUUID *)arg2;
- (bool)startMonitorUnsafeLocationExit:(CLRegion *)arg1 forDevice:(NSUUID *)arg2;
- (bool)stopMonitorSafeLocation:(SASafeLocation *)arg1 forDevice:(NSUUID *)arg2;
- (bool)stopMonitorUnsafeLocationExit:(CLRegion *)arg1 forDevice:(NSUUID *)arg2;

@end
