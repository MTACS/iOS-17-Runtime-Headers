
@interface TSDColorFill : TSDFill <NSCopying, NSMutableCopying, TSDMixing> {
    TSUColor * mColor;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly, copy) TSUColor *color;
@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) double luminance;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) double saturation;

+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithColor:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)keyPathsForValuesAffectingBrightness;
+ (id)keyPathsForValuesAffectingCGColor;
+ (id)keyPathsForValuesAffectingHue;
+ (id)keyPathsForValuesAffectingLuminance;
+ (id)keyPathsForValuesAffectingOpacity;
+ (id)keyPathsForValuesAffectingSaturation;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)UIColor;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (double)brightness;
- (bool)canApplyToCALayer;
- (bool)canApplyToCAShapeLayer;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)drawsInOneStep;
- (int)fillType;
- (id)grayscaleColor;
- (unsigned long long)hash;
- (double)hue;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)invertedColor;
- (bool)isClear;
- (bool)isEqual:(id)arg1;
- (bool)isNearlyWhite;
- (bool)isOpaque;
- (double)luminance;
- (SEL)mapThemeAssetSelector;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)opacity;
- (double)p_hsbComponentWithIndex:(unsigned long long)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)referenceColor;
- (double)saturation;

@end
