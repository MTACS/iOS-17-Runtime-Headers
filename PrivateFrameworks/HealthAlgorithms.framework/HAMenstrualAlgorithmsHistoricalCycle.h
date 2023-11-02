
@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject <NSSecureCoding> {
    long long  _dailyEligibleWristTemperatureCount;
    NSNumber * _fertilityEndJulianDay;
    NSNumber * _fertilityStartJulianDay;
    bool  _isDeterminant;
    unsigned int  _julianDayOfMenstruationEnd;
    unsigned int  _julianDayOfMenstruationStart;
    unsigned char  _ovulationConfirmationFailure;
    NSArray * _phases;
    unsigned char  _predictionPrimarySource;
}

@property (nonatomic) long long dailyEligibleWristTemperatureCount;
@property (nonatomic, retain) NSNumber *fertilityEndJulianDay;
@property (nonatomic, retain) NSNumber *fertilityStartJulianDay;
@property (nonatomic) bool isDeterminant;
@property (nonatomic) unsigned int julianDayOfMenstruationEnd;
@property (nonatomic) unsigned int julianDayOfMenstruationStart;
@property (nonatomic) unsigned char ovulationConfirmationFailure;
@property (nonatomic, retain) NSArray *phases;
@property (nonatomic) unsigned char predictionPrimarySource;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)dailyEligibleWristTemperatureCount;
- (void)encodeWithCoder:(id)arg1;
- (id)fertilityEndJulianDay;
- (id)fertilityStartJulianDay;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeterminant;
- (unsigned int)julianDayOfMenstruationEnd;
- (unsigned int)julianDayOfMenstruationStart;
- (unsigned char)ovulationConfirmationFailure;
- (id)phases;
- (unsigned char)predictionPrimarySource;
- (void)setDailyEligibleWristTemperatureCount:(long long)arg1;
- (void)setFertilityEndJulianDay:(id)arg1;
- (void)setFertilityStartJulianDay:(id)arg1;
- (void)setIsDeterminant:(bool)arg1;
- (void)setJulianDayOfMenstruationEnd:(unsigned int)arg1;
- (void)setJulianDayOfMenstruationStart:(unsigned int)arg1;
- (void)setOvulationConfirmationFailure:(unsigned char)arg1;
- (void)setPhases:(id)arg1;
- (void)setPredictionPrimarySource:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (id)hkmc_cycleWithLastDayIndex:(id)arg1 includeFertileWindow:(bool)arg2 overridePredictionPrimarySource:(id)arg3 overrideOvulationConfirmationFailure:(id)arg4 overrideDailyEligibleWristTemperatureCount:(id)arg5 useWristTemperatureInput:(bool)arg6;
- (id)hkmc_description;

@end
