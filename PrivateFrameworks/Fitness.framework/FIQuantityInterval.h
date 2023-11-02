
@interface FIQuantityInterval : NSObject {
    FIIntervalDefinition * _definition;
    NSDate * _startDate;
    HKQuantity * _threshold;
    HKQuantityType * _trackedQuantityType;
}

@property (nonatomic, readonly) FIIntervalDefinition *definition;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) HKQuantity *threshold;
@property (nonatomic, readonly) HKQuantityType *trackedQuantityType;

- (void).cxx_destruct;
- (id)definition;
- (id)initWithIntervalDefinition:(id)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3;
- (id)startDate;
- (id)threshold;
- (id)trackedQuantityType;

@end
