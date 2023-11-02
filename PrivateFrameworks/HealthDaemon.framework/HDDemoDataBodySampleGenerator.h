
@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray * _boysHeight2To20YearsGrowthCurve;
    NSArray * _boysHeightBirthTo36MonthsGrowthCurve;
    NSArray * _boysWeight2To20YearsGrowthCurve;
    NSArray * _boysWeightBirthTo36MonthsGrowthCurve;
    NSArray * _girlsHeight2To20YearsGrowthCurve;
    NSArray * _girlsHeightBirthTo36MonthsGrowthCurve;
    NSArray * _girlsWeight2To20YearsGrowthCurve;
    NSArray * _girlsWeightBirthTo36MonthsGrowthCurve;
    double  _lastHeightInCm;
    double  _lastWeightInKg;
    double  _nextHeightSampleTime;
    double  _nextWeightSampleTime;
    double  _weightAdultStartInKg;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)lastHeightInCm;
- (double)lastWeightInKg;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
