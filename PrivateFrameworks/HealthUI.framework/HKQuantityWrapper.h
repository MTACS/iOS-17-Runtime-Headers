
@interface HKQuantityWrapper : NSObject {
    NSDateInterval * _dateInterval;
    HKQuantity * _quantity;
}

@property (retain) NSDateInterval *dateInterval;
@property (retain) HKQuantity *quantity;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2;
- (id)quantity;
- (void)setDateInterval:(id)arg1;
- (void)setQuantity:(id)arg1;

@end
