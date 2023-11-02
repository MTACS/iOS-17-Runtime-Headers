
@protocol HDWorkoutSessionController <NSObject>

@required

+ (NSString *)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(NSData *)arg1 profile:(HDProfile *)arg2;

- (void)beginNewActivity:(HKWorkoutActivity *)arg1;
- (bool)enableAutomaticDetectionForActivityConfigurations:(NSArray *)arg1;
- (void)endCurrentActivity:(HKWorkoutActivity *)arg1;
- (void)hktest_setStateTransitionCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, void*
- (id)initWithProfile:(HDProfile *)arg1 sessionConfiguration:(HDWorkoutSessionConfiguration *)arg2 sessionStateController:(id <HDWorkoutSessionStateController>)arg3 recoveryState:(NSData *)arg4;
- (void)unitTest_setCMWorkoutManager:(CMWorkoutManager *)arg1;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 accumulatorDidChange:(id <HDWorkoutDataAccumulator>)arg2;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 didChangeConfiguration:(HDWorkoutSessionConfiguration *)arg2;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(NSDate *)arg4;

@optional

- (void)fakeActivityDetection:(NSUUID *)arg1 workoutActivity:(HKWorkoutActivity *)arg2;
- (void)unitTest_suggestActivity:(HKWorkoutActivity *)arg1;

@end
