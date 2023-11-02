
@interface HAMenstrualAlgorithmsAnalysis : NSObject <NSSecureCoding> {
    HAMenstrualAlgorithmsDeviationAnalysis * _deviationAnalysis;
    NSArray * _fertilityPredictions;
    bool  _isUserInactive;
    NSArray * _menstruationPredictions;
    HAMenstrualAlgorithmsStats * _stats;
}

@property (nonatomic, retain) HAMenstrualAlgorithmsDeviationAnalysis *deviationAnalysis;
@property (nonatomic, retain) NSArray *fertilityPredictions;
@property (nonatomic) bool isUserInactive;
@property (nonatomic, retain) NSArray *menstruationPredictions;
@property (nonatomic, retain) HAMenstrualAlgorithmsStats *stats;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviationAnalysis;
- (void)encodeWithCoder:(id)arg1;
- (id)fertilityPredictions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isUserInactive;
- (id)menstruationPredictions;
- (void)setDeviationAnalysis:(id)arg1;
- (void)setFertilityPredictions:(id)arg1;
- (void)setIsUserInactive:(bool)arg1;
- (void)setMenstruationPredictions:(id)arg1;
- (void)setStats:(id)arg1;
- (id)stats;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (id)hkmc_description;
- (id)hkmc_deviations;
- (id)hkmc_fertileWindowProjectionsWithOverridePredictionPrimarySource:(id)arg1 currentDayIndex:(long long)arg2;
- (id)hkmc_menstruationProjections;
- (id)hkmc_statistics;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)hdmc_demoAnalysisWithStartDayIndex:(long long)arg1;

@end
