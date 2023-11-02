
@protocol HDWorkoutSessionStateController

@required

- (void)autoPauseWithDate:(NSDate *)arg1;
- (void)autoResumeWithDate:(NSDate *)arg1;
- (void)didBeginNewActivity:(HKWorkoutActivity *)arg1;
- (void)didDetectActivityChange:(HKWorkoutActivity *)arg1;
- (void)didEndCurrentActivity:(HKWorkoutActivity *)arg1;
- (void)endHeartRateRecovery;
- (bool)endWithError:(id*)arg1;
- (void)finish;
- (void)finishAggregationWithDate:(NSDate *)arg1;
- (void)generateConfigurationUpdate:(HKWorkoutConfiguration *)arg1;
- (void)generateError:(NSError *)arg1;
- (void)generateEvent:(_HKWorkoutEvent *)arg1;
- (void)generateMetadata:(NSDictionary *)arg1;
- (bool)pauseWithError:(id*)arg1;
- (bool)prepareWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (bool)startActivityWithDate:(NSDate *)arg1 error:(id*)arg2;
- (bool)stopActivityWithDate:(NSDate *)arg1 error:(id*)arg2;
- (bool)storeSessionControllerState:(NSData *)arg1 forRecoveryIdentifier:(NSString *)arg2 error:(id*)arg3;
- (<HDWorkoutDataAccumulator> *)workoutDataAccumulator;

@end
