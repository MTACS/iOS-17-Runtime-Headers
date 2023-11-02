
@protocol PRItemLocalizerDelegate <NSObject>

@required

- (void)didFailWithError:(NSError *)arg1;

@optional

- (void)didUpdateDevicePose:(PRPose *)arg1;
- (void)didUpdateItemPosition:(PRTargetEstimate *)arg1;
- (void)didUpdateRangeEstimate:(PRProximity *)arg1;
- (void)itemChangedState:(unsigned long long)arg1;
- (void)itemLocalizerChangedActivity:(unsigned long long)arg1;
- (void)itemLocalizerChangedState:(unsigned long long)arg1;
- (void)pathIsDegenerate:(NSNumber *)arg1;
- (void)willIntegrateDevicePose:(PRPose *)arg1;
- (void)willIntegrateProximity:(PRProximity *)arg1;

@end
