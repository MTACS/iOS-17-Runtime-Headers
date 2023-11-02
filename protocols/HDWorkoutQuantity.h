
@protocol HDWorkoutQuantity

@required

- (NSDateInterval *)hdw_dateInterval;
- (double)hdw_endTimestamp;
- (HKQuantity *)hdw_quantity;
- (HKQuantitySample *)hdw_sample;
- (double)hdw_startTimestamp;
- (HKQuantityType *)hdw_type;

@end
