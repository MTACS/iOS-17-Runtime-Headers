
@interface DOCTagShapeRenderer : NSObject

+ (id)shared;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageRectForRenderingImage:(id)arg1 tagRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 displayScale:(double)arg3;
- (id)_shapeImageForColorType:(long long)arg1 variant:(unsigned long long)arg2 renderedColor:(id)arg3;
- (double)baselineOffsetForRequest:(id)arg1 tagRectSize:(struct CGSize { double x1; double x2; })arg2;
- (void)renderInContext:(struct CGContext { }*)arg1 contextSize:(struct CGSize { double x1; double x2; })arg2 tagRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 tag:(id)arg4 outlineColor:(id)arg5 fillColor:(id)arg6 traitCollection:(id)arg7;

@end
