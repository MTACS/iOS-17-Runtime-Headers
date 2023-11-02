
@interface VNVector : NSObject <NSCopying, NSSecureCoding> {
    VNPoint * _vectorProjections;
}

@property (readonly) double length;
@property (readonly) double r;
@property (readonly) double squaredLength;
@property (readonly) double theta;
@property (readonly) double x;
@property (readonly) double y;

+ (double)dotProductOfVector:(id)arg1 vector:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)unitVectorForVector:(id)arg1;
+ (id)vectorByAddingVector:(id)arg1 toVector:(id)arg2;
+ (id)vectorByMultiplyingVector:(id)arg1 byScalar:(double)arg2;
+ (id)vectorBySubtractingVector:(id)arg1 fromVector:(id)arg2;
+ (id)zeroVector;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithR:(double)arg1 theta:(double)arg2;
- (id)initWithVectorHead:(id)arg1 tail:(id)arg2;
- (id)initWithXComponent:(double)arg1 yComponent:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)length;
- (double)r;
- (double)squaredLength;
- (double)theta;
- (double)x;
- (double)y;

@end
