
@protocol HKGraphRenderer <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axisRect;
- (struct CGSize { double x1; double x2; })drawAttributedText:(NSAttributedString *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 exclusion:(id <HKGraphRendererExclusion>)arg5;
- (void)drawPath:(UIBezierPath *)arg1 strokeColor:(UIColor *)arg2 fillColor:(UIColor *)arg3 markerImage:(UIImage *)arg4 useGradientFill:(bool)arg5 blendMode:(int)arg6 clipToAxes:(bool)arg7;
- (struct CGSize { double x1; double x2; })drawText:(NSString *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 spaceAvailable:(NSNumber *)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 hyphenationFactor:(NSNumber *)arg6 textColor:(UIColor *)arg7 font:(UIFont *)arg8 clipToAxis:(bool)arg9 exclusion:(id <HKGraphRendererExclusion>)arg10;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFillStyle:(HKFillStyle *)arg2 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(double)arg4;
- (<HKGraphRenderDelegate> *)renderDelegate;
- (void)setAxisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsRender;
- (void)setRenderDelegate:(id <HKGraphRenderDelegate>)arg1;

@end
