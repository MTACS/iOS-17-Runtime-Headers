
@interface HAMenstrualAlgorithmsDayInput : NSObject <NSSecureCoding> {
    unsigned char  _flow;
    unsigned int  _julianDay;
    unsigned char  _ovulationTestResult;
    HAMenstrualAlgorithmsHeartRateStatistics * _sedentaryHeartRateStatistics;
    HAMenstrualAlgorithmsHeartRateStatistics * _sleepHeartRateStatistics;
    bool  _spotting;
    HAMenstrualAlgorithmsWristTemperature * _wristTemperature;
}

@property (nonatomic) unsigned char flow;
@property (nonatomic) unsigned int julianDay;
@property (nonatomic) unsigned char ovulationTestResult;
@property (nonatomic, retain) HAMenstrualAlgorithmsHeartRateStatistics *sedentaryHeartRateStatistics;
@property (nonatomic, retain) HAMenstrualAlgorithmsHeartRateStatistics *sleepHeartRateStatistics;
@property (nonatomic) bool spotting;
@property (nonatomic, retain) HAMenstrualAlgorithmsWristTemperature *wristTemperature;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)flow;
- (id)initWithCoder:(id)arg1;
- (unsigned int)julianDay;
- (unsigned char)ovulationTestResult;
- (id)sedentaryHeartRateStatistics;
- (void)setFlow:(unsigned char)arg1;
- (void)setJulianDay:(unsigned int)arg1;
- (void)setOvulationTestResult:(unsigned char)arg1;
- (void)setSedentaryHeartRateStatistics:(id)arg1;
- (void)setSleepHeartRateStatistics:(id)arg1;
- (void)setSpotting:(bool)arg1;
- (void)setWristTemperature:(id)arg1;
- (id)sleepHeartRateStatistics;
- (bool)spotting;
- (id)wristTemperature;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_dayInputWithDaySummary:(id)arg1;
+ (id)hkmc_dayInputWithHeartStatistics:(id)arg1;
+ (id)hkmc_emptyDayInputWithDayIndex:(long long)arg1;

- (void)hkmc_updateWithHeartStatistics:(id)arg1;

@end
