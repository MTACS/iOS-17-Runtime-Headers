
@interface _OSInactivityPredictorOutput : NSObject <NSSecureCoding> {
    long long  _confidenceLevel;
    double  _confidenceValue;
    long long  _outputReason;
    double  _predictedDuration;
}

@property (nonatomic) long long confidenceLevel;
@property (nonatomic) double confidenceValue;
@property (nonatomic) long long outputReason;
@property (nonatomic) double predictedDuration;

+ (bool)supportsSecureCoding;

- (void)adjustedPredictedDurationWithStrictLeeway:(double)arg1 andRelaxedLeeway:(double)arg2 andMaxPredictionCap:(double)arg3;
- (long long)confidenceLevel;
- (id)confidenceLevelString;
- (double)confidenceValue;
- (id)confidenceValueString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initInvalidOutput;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidenceLevel:(long long)arg1 andConfidenceValue:(double)arg2 andPredictedDuration:(double)arg3 andReason:(long long)arg4;
- (id)initWithConfidenceValue:(double)arg1 andRelaxedThreshold:(double)arg2 andStrictThreshold:(double)arg3 andPredictedDuration:(double)arg4 andReason:(long long)arg5;
- (id)initWithConfidenceValue:(double)arg1 andRelaxedThreshold:(double)arg2 andStrictThreshold:(double)arg3 andPredictedDuration:(double)arg4 withReason:(long long)arg5;
- (long long)outputReason;
- (id)outputReasonString;
- (double)predictedDuration;
- (id)predictedDurationString;
- (void)safeSubtractWaitTimeFromPredictedDuration:(double)arg1;
- (void)setConfidenceLevel:(long long)arg1;
- (void)setConfidenceValue:(double)arg1;
- (void)setOutputReason:(long long)arg1;
- (void)setPredictedDuration:(double)arg1;

@end
