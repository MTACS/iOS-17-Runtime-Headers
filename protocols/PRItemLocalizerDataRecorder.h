
@protocol PRItemLocalizerDataRecorder

@optional

- (void)recordCustomData:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (void)recordEstimatorInput:(PREstimatorInput *)arg1;
- (void)recordPoseMeasurement:(PRPose *)arg1;
- (void)recordProximityMeasurement:(PRRoseSolution *)arg1;
- (void)recordRangeEstimate:(PRProximity *)arg1;
- (void)recordTargetEstimates:(NSArray *)arg1;
- (void)recordTargetMovingStateChanged:(bool)arg1 atTime:(double)arg2;
- (void)start;
- (void)stopAndDiscard;
- (NSURL *)stopAndSave;

@end
