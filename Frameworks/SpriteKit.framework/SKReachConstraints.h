
@interface SKReachConstraints : NSObject <NSSecureCoding> {
    double  _lowerAngleLimit;
    double  _upperAngleLimit;
}

@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2;
- (double)lowerAngleLimit;
- (void)setLowerAngleLimit:(double)arg1;
- (void)setUpperAngleLimit:(double)arg1;
- (double)upperAngleLimit;

@end
