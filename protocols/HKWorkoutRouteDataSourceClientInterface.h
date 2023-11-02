
@protocol HKWorkoutRouteDataSourceClientInterface <NSObject>

@required

- (void)clientRemote_didUpdateAltitude:(HKQuantity *)arg1;
- (void)clientRemote_didUpdateElevation:(HKQuantity *)arg1;
- (void)clientRemote_didUpdateRoute:(HKWorkoutRoute *)arg1;

@end
