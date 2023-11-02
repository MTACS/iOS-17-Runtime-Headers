
@interface FxMatrix44 : NSObject <NSSecureCoding> {
    double  _mat;
}

+ (bool)supportsSecureCoding;

- (bool)_planarInverseZ;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorMatrix44Data:(double)arg1;
- (id)initWithFxMatrix:(id)arg1;
- (id)initWithMatrix44Data:(double)arg1;
- (bool)invert;
- (bool)invertColorMatrixWithTolerance:(double)arg1;
- (double*)matrix;
- (void)setMatrix:(double)arg1;
- (void)setToIdentity;
- (struct CGPoint { double x1; double x2; })transform2DPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct FxPoint3D { double x1; double x2; double x3; })transform3DPoint:(struct FxPoint3D { double x1; double x2; double x3; })arg1;
- (void)transpose;

@end
