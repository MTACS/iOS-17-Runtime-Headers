
@protocol HDLocationEventDelegate

@required

- (void)altitudeUpdated:(double)arg1;
- (void)elevationUpdated:(unsigned long long)arg1;
- (void)workoutRouteUpdated:(HKWorkoutRoute *)arg1;

@end
