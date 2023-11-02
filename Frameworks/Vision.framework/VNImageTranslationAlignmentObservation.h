
@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _alignmentTransform;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } alignmentTransform;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })alignmentTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })alignmentTransformInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAlignmentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)vn_cloneObject;

@end
