
@interface HKVisionPrism : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _amount;
    HKQuantity * _angle;
    long long  _eye;
    HKQuantity * _horizontalAmount;
    long long  _horizontalBase;
    HKQuantity * _verticalAmount;
    long long  _verticalBase;
}

@property (nonatomic, readonly, copy) HKQuantity *amount;
@property (nonatomic, readonly, copy) HKQuantity *angle;
@property (nonatomic, readonly) long long eye;
@property (nonatomic, readonly, copy) HKQuantity *horizontalAmount;
@property (nonatomic, readonly) long long horizontalBase;
@property (nonatomic, readonly, copy) HKQuantity *verticalAmount;
@property (nonatomic, readonly) long long verticalBase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPolarValues;
- (void)_setRectangularValues;
- (void)_validatePolar;
- (void)_validateRectangular;
- (id)amount;
- (id)angle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eye;
- (id)horizontalAmount;
- (long long)horizontalBase;
- (id)initWithAmount:(id)arg1 angle:(id)arg2 eye:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithVerticalAmount:(id)arg1 verticalBase:(long long)arg2 horizontalAmount:(id)arg3 horizontalBase:(long long)arg4 eye:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)verticalAmount;
- (long long)verticalBase;

@end
