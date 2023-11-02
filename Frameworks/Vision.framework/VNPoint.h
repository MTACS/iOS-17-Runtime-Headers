
@interface VNPoint : NSObject <NSCopying, NSSecureCoding> {
    double  _x;
    double  _y;
}

@property (readonly) struct CGPoint { double x1; double x2; } location;
@property (readonly) double x;
@property (readonly) double y;

+ (double)distanceBetweenPoint:(id)arg1 point:(id)arg2;
+ (id)pointByApplyingVector:(id)arg1 toPoint:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)zeroPoint;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)distanceToPoint:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithX:(double)arg1 y:(double)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (id)transformedWith:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (double)x;
- (double)y;

@end
