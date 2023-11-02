
@interface SHRange : NSObject <NSCopying, NSSecureCoding> {
    double  _lowerBound;
    double  _upperBound;
}

@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

+ (id)mergedRangesFrom:(id)arg1;
+ (id)rangeWithLowerBound:(double)arg1 upperBound:(double)arg2;
+ (bool)supportsSecureCoding;

- (bool)contains:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithStart:(double)arg1 duration:(double)arg2;
- (bool)intersects:(id)arg1;
- (bool)isEqualToRange:(id)arg1 withTolerance:(double)arg2;
- (double)lowerBound;
- (id)serializedRepresentation;
- (double)upperBound;

@end
