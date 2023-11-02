
@interface HKWorkoutBuilderQuantity : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    HKQuantity * _quantity;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) HKQuantity *quantity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2;
- (id)quantity;

@end
