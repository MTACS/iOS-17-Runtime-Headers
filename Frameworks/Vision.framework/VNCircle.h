
@interface VNCircle : NSObject <NSCopying, NSSecureCoding> {
    VNPoint * _center;
    double  _radius;
}

@property (readonly) VNPoint *center;
@property (readonly) double diameter;
@property (readonly) double radius;

+ (bool)supportsSecureCoding;
+ (id)zeroCircle;

- (void).cxx_destruct;
- (id)center;
- (bool)containsPoint:(id)arg1;
- (bool)containsPoint:(id)arg1 inCircumferentialRingOfWidth:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)diameter;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCenter:(id)arg1 diameter:(double)arg2;
- (id)initWithCenter:(id)arg1 radius:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)radius;

@end
