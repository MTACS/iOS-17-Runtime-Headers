
@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying> {
    NTKLayoutRule * _layoutRule;
    NSNumber * _tracking;
}

@property (nonatomic, retain) NTKLayoutRule *layoutRule;
@property (nonatomic, retain) NSNumber *tracking;

+ (id)_fontForDesign:(id)arg1 withWeight:(double)arg2 onDevice:(id)arg3;
+ (id)defaultRoundedStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(bool)arg3 forDevice:(id)arg4;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(bool)arg3 font:(id)arg4 forDevice:(id)arg5;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(bool)arg3 forDevice:(id)arg4;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(bool)arg3 withBaselineY:(double)arg4 forDevice:(id)arg5;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(bool)arg3 withBaselineY:(double)arg4 withFont:(id)arg5 forDevice:(id)arg6;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 weight:(double)arg2 forDevice:(id)arg3;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withBaselineY:(double)arg2 withFont:(id)arg3 forDevice:(id)arg4;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)layoutRule;
- (void)setLayoutRule:(id)arg1;
- (void)setTracking:(id)arg1;
- (id)tracking;

@end
