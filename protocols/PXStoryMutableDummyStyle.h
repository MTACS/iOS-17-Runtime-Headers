
@protocol PXStoryMutableDummyStyle

@required

- (NSArray *)allowedClipCompositionsInLandscape;
- (NSArray *)allowedClipCompositionsInPortrait;
- (long long)cropMode;
- (long long)cropVerticalContentMode;
- (double)defaultSegmentDuration;
- (double)kenBurnsDistance;
- (unsigned int)kenBurnsPanDirection;
- (struct CGPoint { double x1; double x2; })kenBurnsRelativeTransformOrigin;
- (double)kenBurnsRotationInDegrees;
- (double)kenBurnsScale;
- (long long)oneUpKenBurnsKind;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (double)separatorPanDistance;
- (double)separatorRotationAngle;
- (void)setAllowedClipCompositionsInLandscape:(NSArray *)arg1;
- (void)setAllowedClipCompositionsInPortrait:(NSArray *)arg1;
- (void)setCropMode:(long long)arg1;
- (void)setCropVerticalContentMode:(long long)arg1;
- (void)setDefaultSegmentDuration:(double)arg1;
- (void)setKenBurnsDistance:(double)arg1;
- (void)setKenBurnsPanDirection:(unsigned int)arg1;
- (void)setKenBurnsRelativeTransformOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKenBurnsRotationInDegrees:(double)arg1;
- (void)setKenBurnsScale:(double)arg1;
- (void)setOneUpKenBurnsKind:(long long)arg1;
- (void)setOutroDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeparatorPanDistance:(double)arg1;
- (void)setSeparatorRotationAngle:(double)arg1;
- (void)setThreeUpKenBurnsKind:(long long)arg1;
- (void)setThreeUpSeparatorEffectKind:(long long)arg1;
- (void)setTransitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg1;
- (void)setTwoUpKenBurnsKind:(long long)arg1;
- (void)setTwoUpSeparatorEffectKind:(long long)arg1;
- (long long)threeUpKenBurnsKind;
- (long long)threeUpSeparatorEffectKind;
- (struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })transitionInfo;
- (long long)twoUpKenBurnsKind;
- (long long)twoUpSeparatorEffectKind;

@end
