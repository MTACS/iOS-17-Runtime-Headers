
@interface HAMenstrualAlgorithmsDeviation : NSObject <NSSecureCoding> {
    unsigned int  _julianDayOfAnalysisWindowEnd;
    unsigned int  _julianDayOfAnalysisWindowStart;
    NSDictionary * _metricsForCoreAnalytics;
}

@property (nonatomic) unsigned int julianDayOfAnalysisWindowEnd;
@property (nonatomic) unsigned int julianDayOfAnalysisWindowStart;
@property (nonatomic, copy) NSDictionary *metricsForCoreAnalytics;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)julianDayOfAnalysisWindowEnd;
- (unsigned int)julianDayOfAnalysisWindowStart;
- (id)metricsForCoreAnalytics;
- (void)setJulianDayOfAnalysisWindowEnd:(unsigned int)arg1;
- (void)setJulianDayOfAnalysisWindowStart:(unsigned int)arg1;
- (void)setMetricsForCoreAnalytics:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (id)hkmc_description;
- (id)hkmc_deviationOfType:(long long)arg1;

@end
