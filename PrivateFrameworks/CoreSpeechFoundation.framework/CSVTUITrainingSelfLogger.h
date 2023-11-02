
@interface CSVTUITrainingSelfLogger : NSObject

+ (id)sharedLogger;

- (void)logSiriSetupPHSEnrollmentDigitalZeroDetectionCompletedWithSiriSetupID:(id)arg1 withPageNumber:(int)arg2 withPhId:(id)arg3 withMaxNumContinuousZeros:(int)arg4 withMaxNumAllowedContinuousZeros:(int)arg5 withIsMaxNumContinuousZerosOverThreshold:(bool)arg6;
- (void)logSiriSetupPHSEnrollmentUtteranceCompletedWithSiriSetupID:(id)arg1 withPageNumber:(int)arg2 withPhId:(id)arg3 withTopScoreForUtterance:(float)arg4 withStartSampleCount:(int)arg5 withEndSampleCount:(int)arg6 withHasSpeechDetected:(int)arg7;

@end
