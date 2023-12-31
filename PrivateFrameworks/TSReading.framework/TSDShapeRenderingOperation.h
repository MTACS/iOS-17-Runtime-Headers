
@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation {
    double  mAngle;
    int  mShapeType;
}

- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 shapeType:(int)arg5 documentRoot:(id)arg6;
- (bool)needsPressedStateBackground;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })swatchEdgeInsets;

@end
