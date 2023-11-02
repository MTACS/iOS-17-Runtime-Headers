
@interface HKHRAFibBurdenSevenDayAnalysisResults : NSObject <NSSecureCoding> {
    bool  _onboardedWithinAnalysisInterval;
    long long  _result;
    HKQuantitySample * _sampleCreated;
}

@property (nonatomic, readonly) bool onboardedWithinAnalysisInterval;
@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly) HKQuantitySample *sampleCreated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(long long)arg1 sample:(id)arg2 onboardedWithinAnalysisInterval:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)onboardedWithinAnalysisInterval;
- (long long)result;
- (id)sampleCreated;

@end
