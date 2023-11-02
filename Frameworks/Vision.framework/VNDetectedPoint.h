
@interface VNDetectedPoint : VNPoint {
    float  _confidence;
}

@property (readonly) float confidence;

+ (bool)supportsSecureCoding;

- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 confidence:(float)arg2;
- (bool)isEqual:(id)arg1;
- (id)transformedWith:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
