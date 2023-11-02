
@interface CMWalkingSteadinessClassificationData : NSObject <NSCopying, NSSecureCoding> {
    long long  _classificationType;
    double  _lowerBound;
    double  _upperBound;
}

@property (nonatomic, readonly) long long classificationType;
@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

+ (bool)supportsSecureCoding;

- (long long)classificationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 classificationType:(long long)arg3;
- (double)lowerBound;
- (double)upperBound;

@end
