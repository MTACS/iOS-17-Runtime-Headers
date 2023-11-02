
@interface HKWorkoutZone : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _endQuantity;
    NSUUID * _identifier;
    HKQuantity * _startQuantity;
}

@property (nonatomic, readonly, copy) HKQuantity *endQuantity;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) HKQuantity *startQuantity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endQuantity;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startQuantity:(id)arg2 endQuantity:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)startQuantity;

@end
