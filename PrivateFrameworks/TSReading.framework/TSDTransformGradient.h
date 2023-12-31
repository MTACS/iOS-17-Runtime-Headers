
@interface TSDTransformGradient : TSDGradient <TSDMixing> {
    struct CGSize { 
        double width; 
        double height; 
    }  mBaseNaturalSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  mEnd;
    struct CGPoint { 
        double x; 
        double y; 
    }  mStart;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformBeforeUpgrade;
}

@property (nonatomic) struct CGSize { double x1; double x2; } baseNaturalSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

- (struct CGSize { double x1; double x2; })baseNaturalSize;
- (struct CGSize { double x1; double x2; })baseNaturalSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (struct CGPoint { double x1; double x2; })endPoint;
- (struct CGPoint { double x1; double x2; })endPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)gradientAngleInDegrees;
- (unsigned long long)hash;
- (id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (bool)isAdvancedGradientIgnoringFlag;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringTransform:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })normalizedPointForSize:(struct CGSize { double x1; double x2; })arg1 endPoint:(bool)arg2;
- (void)p_drawQuartzShadingInContext:(struct CGContext { }*)arg1 withGradientNaturalSize:(struct CGSize { double x1; double x2; })arg2 baseNaturalSize:(struct CGSize { double x1; double x2; })arg3 start:(struct CGPoint { double x1; double x2; })arg4 end:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGPoint { double x1; double x2; })p_scalePoint:(struct CGPoint { double x1; double x2; })arg1 fromShapeWithNaturalSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })p_scalePoint:(struct CGPoint { double x1; double x2; })arg1 toShapeWithNaturalSize:(struct CGSize { double x1; double x2; })arg2;
- (void)p_setDefaultValues;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(bool)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 atAngle:(double)arg3;
- (void)setBaseNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (struct CGPoint { double x1; double x2; })startPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForSize:(struct CGSize { double x1; double x2; })arg1;

@end
