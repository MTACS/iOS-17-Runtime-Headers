
@interface BCSTimingMeasurement : BCSMeasurement {
    NSDate * _endDate;
    NSArray * _realTimeMeasurementHandlers;
    NSDate * _startDate;
    long long  _timingMeasurementType;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long timingMeasurementType;

+ (id)newTimingMeasurement:(long long)arg1 withHandlers:(id)arg2;

- (void).cxx_destruct;
- (void)begin;
- (double)duration;
- (void)end;
- (long long)timingMeasurementType;

@end
