
@interface HDWorkoutSeriesQuantity : NSObject <HDWorkoutQuantity> {
    NSDateInterval * _dateInterval;
    HKQuantity * _quantity;
    HKQuantitySample * _series;
}

@property (nonatomic, readonly) NSDateInterval *hdw_dateInterval;
@property (nonatomic, readonly) double hdw_endTimestamp;
@property (nonatomic, readonly) HKQuantity *hdw_quantity;
@property (nonatomic, readonly) HKQuantitySample *hdw_sample;
@property (nonatomic, readonly) double hdw_startTimestamp;
@property (nonatomic, readonly) HKQuantityType *hdw_type;

- (void).cxx_destruct;
- (id)description;
- (id)hdw_dateInterval;
- (double)hdw_endTimestamp;
- (id)hdw_quantity;
- (id)hdw_sample;
- (double)hdw_startTimestamp;
- (id)hdw_type;
- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2 series:(id)arg3;

@end
