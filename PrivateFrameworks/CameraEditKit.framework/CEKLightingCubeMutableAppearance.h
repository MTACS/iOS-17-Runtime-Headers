
@interface CEKLightingCubeMutableAppearance : CEKLightingCubeAppearance

@property (nonatomic) struct CGGradient { }*background;
@property (nonatomic) struct CGColor { }*bottomFill;
@property (nonatomic) struct CGGradient { }*bottomInnerGlow;
@property (nonatomic) struct CGGradient { }*bottomMask;
@property (nonatomic) struct CGGradient { }*bottomOuterGlow;
@property (nonatomic) struct CGColor { }*stroke;
@property (nonatomic) struct CGColor { }*topFill;
@property (nonatomic) struct CGGradient { }*topGlow;
@property (nonatomic) struct CGGradient { }*topMask;
@property (nonatomic) struct CGGradient { }*topOver;
@property (nonatomic) double verticalFillBackIntensity;
@property (nonatomic) struct CGColor { }*verticalFillColor;
@property (nonatomic) double verticalFillFrontIntensity;

- (struct CGGradient { }*)background;
- (struct CGColor { }*)bottomFill;
- (struct CGGradient { }*)bottomInnerGlow;
- (struct CGGradient { }*)bottomMask;
- (struct CGGradient { }*)bottomOuterGlow;
- (void)setBackground:(struct CGGradient { }*)arg1;
- (void)setBottomFill:(struct CGColor { }*)arg1;
- (void)setBottomInnerGlow:(struct CGGradient { }*)arg1;
- (void)setBottomMask:(struct CGGradient { }*)arg1;
- (void)setBottomOuterGlow:(struct CGGradient { }*)arg1;
- (void)setStroke:(struct CGColor { }*)arg1;
- (void)setTopFill:(struct CGColor { }*)arg1;
- (void)setTopGlow:(struct CGGradient { }*)arg1;
- (void)setTopMask:(struct CGGradient { }*)arg1;
- (void)setTopOver:(struct CGGradient { }*)arg1;
- (void)setVerticalFillBackIntensity:(double)arg1;
- (void)setVerticalFillColor:(struct CGColor { }*)arg1;
- (void)setVerticalFillFrontIntensity:(double)arg1;
- (struct CGColor { }*)stroke;
- (struct CGColor { }*)topFill;
- (struct CGGradient { }*)topGlow;
- (struct CGGradient { }*)topMask;
- (struct CGGradient { }*)topOver;
- (double)verticalFillBackIntensity;
- (struct CGColor { }*)verticalFillColor;
- (double)verticalFillFrontIntensity;

@end
