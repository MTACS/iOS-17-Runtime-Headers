
@interface MXLocationActivityMetric : MXMetric {
    NSMeasurement * _cumulativeBestAccuracyForNavigationTime;
    NSMeasurement * _cumulativeBestAccuracyTime;
    NSMeasurement * _cumulativeHundredMetersAccuracyTime;
    NSMeasurement * _cumulativeKilometerAccuracyTime;
    NSMeasurement * _cumulativeNearestTenMetersAccuracyTime;
    NSMeasurement * _cumulativeThreeKilometersAccuracyTime;
}

@property (readonly) NSMeasurement *cumulativeBestAccuracyForNavigationTime;
@property (readonly) NSMeasurement *cumulativeBestAccuracyTime;
@property (readonly) NSMeasurement *cumulativeHundredMetersAccuracyTime;
@property (readonly) NSMeasurement *cumulativeKilometerAccuracyTime;
@property (readonly) NSMeasurement *cumulativeNearestTenMetersAccuracyTime;
@property (readonly) NSMeasurement *cumulativeThreeKilometersAccuracyTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cumulativeBestAccuracyForNavigationTime;
- (id)cumulativeBestAccuracyTime;
- (id)cumulativeHundredMetersAccuracyTime;
- (id)cumulativeKilometerAccuracyTime;
- (id)cumulativeNearestTenMetersAccuracyTime;
- (id)cumulativeThreeKilometersAccuracyTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeBestAccuracyTimeMeasurement:(id)arg1 cumulativeBestAccuracyForNavigationTimeMeasurement:(id)arg2 nearestTenMetersAccuracyTimeMeasurement:(id)arg3 hundredMetersAccuracyTimeMeasurement:(id)arg4 kilometerAccuracyTimeMeasurement:(id)arg5 threeKilometerAccuracyTimeMeasurement:(id)arg6;
- (id)toDictionary;

@end
