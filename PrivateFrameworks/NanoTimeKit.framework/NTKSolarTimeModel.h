
@interface NTKSolarTimeModel : NSObject {
    bool  _dependentValuesNeedUpdate;
    double  _effectiveSolarDayLength;
    NSDate * _endDateForReferenceDate;
    NSDate * _localDawnDate;
    NSDate * _localDuskDate;
    NSDate * _localSolarMidnightDate;
    NSDate * _localSolarNoonDate;
    NSDate * _localSunriseDate;
    NSDate * _localSunsetDate;
    NSDate * _referenceDate;
    CLLocation * _referenceLocation;
    NSDate * _startDateForReferenceDate;
    unsigned long long  _twilightType;
    bool  _usePlaceholderData;
}

@property (nonatomic) bool dependentValuesNeedUpdate;
@property (nonatomic) double effectiveSolarDayLength;
@property (nonatomic, retain) NSDate *endDateForReferenceDate;
@property (nonatomic, retain) NSDate *localDawnDate;
@property (nonatomic, retain) NSDate *localDuskDate;
@property (nonatomic, retain) NSDate *localSolarMidnightDate;
@property (nonatomic, retain) NSDate *localSolarNoonDate;
@property (nonatomic, retain) NSDate *localSunriseDate;
@property (nonatomic, retain) NSDate *localSunsetDate;
@property (nonatomic, retain) NSDate *referenceDate;
@property (nonatomic, retain) CLLocation *referenceLocation;
@property (nonatomic, retain) NSDate *startDateForReferenceDate;
@property (nonatomic) unsigned long long twilightType;
@property (nonatomic) bool usePlaceholderData;

- (void).cxx_destruct;
- (id)_nextEvent:(id)arg1 ofType:(unsigned int)arg2;
- (void)_updateDependentValues;
- (id)dateForPercentageThroughPeriod:(double)arg1;
- (bool)dependentValuesNeedUpdate;
- (double)effectiveSolarDayLength;
- (id)endDateForReferenceDate;
- (bool)includesDate:(id)arg1;
- (id)init;
- (id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2;
- (id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2 twilightType:(unsigned long long)arg3;
- (id)localDawnDate;
- (id)localDuskDate;
- (id)localSolarMidnightDate;
- (id)localSolarNoonDate;
- (id)localSunriseDate;
- (id)localSunsetDate;
- (id)normalizeDateIntervalForDate:(id)arg1;
- (id)ntkCacheableKey;
- (double)percentageThroughPeriodForDate:(id)arg1;
- (double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
- (double)percentageThroughPeriodInCurrentSolarDayForDate:(id)arg1;
- (id)referenceDate;
- (id)referenceLocation;
- (void)setDependentValuesNeedUpdate:(bool)arg1;
- (void)setEffectiveSolarDayLength:(double)arg1;
- (void)setEndDateForReferenceDate:(id)arg1;
- (void)setLocalDawnDate:(id)arg1;
- (void)setLocalDuskDate:(id)arg1;
- (void)setLocalSolarMidnightDate:(id)arg1;
- (void)setLocalSolarNoonDate:(id)arg1;
- (void)setLocalSunriseDate:(id)arg1;
- (void)setLocalSunsetDate:(id)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setReferenceLocation:(id)arg1;
- (void)setStartDateForReferenceDate:(id)arg1;
- (void)setTwilightType:(unsigned long long)arg1;
- (void)setUsePlaceholderData:(bool)arg1;
- (id)startDateForReferenceDate;
- (unsigned long long)twilightType;
- (void)updateForTimeZoneChange;
- (void)updateModelWithDate:(id)arg1;
- (bool)usePlaceholderData;

@end
