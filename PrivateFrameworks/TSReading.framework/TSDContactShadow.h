
@interface TSDContactShadow : TSDShadow {
    double  mHeight;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double perspective;

+ (id)contactShadowWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor { }*)arg5 enabled:(bool)arg6;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInNaturalSpaceForRep:(id)arg1;
- (double)clampOffset:(double)arg1;
- (double)clampRadius:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)height;
- (id)initWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor { }*)arg5 enabled:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGImage { }*)newShadowImageForRep:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 drawSelector:(SEL)arg3 unflipped:(bool)arg4;
- (struct CGImage { }*)newShadowImageFromContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 unflipped:(bool)arg4;
- (double)perspective;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 additionalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (unsigned long long)shadowType;

@end
