
@interface FxTransform : NSObject {
    struct FxTransformPriv { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; float x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; } * _priv;
}

+ (id)identity;
+ (id)transformWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)transformWithScale:(struct CGPoint { double x1; double x2; })arg1 rotate:(float)arg2 translate:(struct CGPoint { double x1; double x2; })arg3 shear:(struct CGPoint { double x1; double x2; })arg4;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cgAffineTransform;
- (void)dealloc;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithScale:(struct CGPoint { double x1; double x2; })arg1 rotate:(float)arg2 translate:(struct CGPoint { double x1; double x2; })arg3 shear:(struct CGPoint { double x1; double x2; })arg4;
- (float)rotation;
- (struct CGPoint { double x1; double x2; })scale;
- (void)setCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setRotation:(float)arg1;
- (void)setScale:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShear:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })shear;
- (struct CGPoint { double x1; double x2; })translation;

@end
