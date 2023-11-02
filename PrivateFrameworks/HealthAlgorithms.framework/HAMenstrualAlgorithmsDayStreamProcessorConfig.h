
@interface HAMenstrualAlgorithmsDayStreamProcessorConfig : NSObject <NSSecureCoding> {
    NSDateComponents * _birthDateComponents;
    HAMenstrualAlgorithmsDeviationInput * _deviationInput;
    NSNumber * _julianDayOfUserReportedCycleLength;
    NSNumber * _julianDayOfUserReportedMenstruationLength;
    unsigned int  _todayAsJulianDay;
    NSNumber * _userReportedCycleLength;
    NSNumber * _userReportedMenstruationLength;
}

@property (nonatomic, retain) NSDateComponents *birthDateComponents;
@property (nonatomic, retain) HAMenstrualAlgorithmsDeviationInput *deviationInput;
@property (nonatomic, retain) NSNumber *julianDayOfUserReportedCycleLength;
@property (nonatomic, retain) NSNumber *julianDayOfUserReportedMenstruationLength;
@property (nonatomic) unsigned int todayAsJulianDay;
@property (nonatomic, retain) NSNumber *userReportedCycleLength;
@property (nonatomic, retain) NSNumber *userReportedMenstruationLength;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)birthDateComponents;
- (id)deviationInput;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)julianDayOfUserReportedCycleLength;
- (id)julianDayOfUserReportedMenstruationLength;
- (void)setBirthDateComponents:(id)arg1;
- (void)setDeviationInput:(id)arg1;
- (void)setJulianDayOfUserReportedCycleLength:(id)arg1;
- (void)setJulianDayOfUserReportedMenstruationLength:(id)arg1;
- (void)setTodayAsJulianDay:(unsigned int)arg1;
- (void)setUserReportedCycleLength:(id)arg1;
- (void)setUserReportedMenstruationLength:(id)arg1;
- (unsigned int)todayAsJulianDay;
- (id)userReportedCycleLength;
- (id)userReportedMenstruationLength;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_configurationWithBirthDateComponents:(id)arg1 userReportedCycleLength:(id)arg2 onDayIndex:(long long)arg3 userReportedMenstruationLength:(id)arg4 onDayIndex:(long long)arg5;

@end
