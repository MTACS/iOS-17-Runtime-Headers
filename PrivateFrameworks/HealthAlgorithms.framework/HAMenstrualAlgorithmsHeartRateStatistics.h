
@interface HAMenstrualAlgorithmsHeartRateStatistics : NSObject <NSSecureCoding> {
    NSNumber * _lowerPercentile;
    long long  _sampleCount;
}

@property (nonatomic, retain) NSNumber *lowerPercentile;
@property (nonatomic) long long sampleCount;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lowerPercentile;
- (long long)sampleCount;
- (void)setLowerPercentile:(id)arg1;
- (void)setSampleCount:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_heartRateStatisticsWithStatistics:(id)arg1;

@end
