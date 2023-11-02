
@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _bloodGlucoseCarbohydrateGlycemicRate;
    double  _bloodGlucoseDecreaseRateDueToInsulin;
    double  _carbohydratesLeftToDigest;
    HDDemoDataFoodDatabase * _foodDatabase;
    double  _lastBloodGlucose;
    NSArray * _lastMeal;
    double  _lastMealTime;
    double  _nextBloodGlucoseFingerStickSampleTime;
    double  _nextBloodGlucoseMealTime;
    double  _nextBloodGlucoseSampleTime;
    double  _nextBreakfastTime;
    double  _nextDinnerTime;
    double  _nextInsulinPumpBasalSampleTime;
    double  _nextLunchTime;
    double  _nextMealTime;
    double  _nextSnackTime;
    double  _nextWaterConsumedSampleTime;
}

@property (nonatomic, readonly) double lastMealTime;
@property (nonatomic, readonly) double nextBreakfastTime;
@property (nonatomic, readonly) double nextDinnerTime;
@property (nonatomic, readonly) double nextLunchTime;
@property (nonatomic, readonly) double nextSnackTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_computeMealTimeForDemoPerson:(id)arg1 fromTime:(double)arg2 mealTimeType:(long long)arg3 timeMean:(double)arg4 stdDev:(double)arg5;
- (void)_generateRandomLastMeal;
- (bool)_isDemoPersonConsumingCaffeine:(id)arg1 atTime:(double)arg2;
- (id)_lastMeal;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)lastMealTime;
- (double)nextBreakfastTime;
- (double)nextDinnerTime;
- (double)nextLunchTime;
- (double)nextSnackTime;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
