
@interface VNHorizonObservation : VNObservation {
    double  _angle;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) double angle;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (double)angle;
- (double)angleInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAngle:(double)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)vn_cloneObject;

@end
