
@interface TSUColor : NSObject <NSCopying, TSSPreset, TSSPresetSource, TSSThemeAsset> {
    struct CGColor { } * mCGColor;
}

@property (readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) NSString *presetKind;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithPlatformColor:(id)arg1;
+ (id)colorWithRGBAComponents:(const double*)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)UIColor;
- (double)alphaComponent;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkenedColorByFactor:(double)arg1;
- (void)dealloc;
- (void)getRGBAComponents:(double*)arg1;
- (id)grayscaleColor;
- (double)greenComponent;
- (unsigned long long)hash;
- (double)hueComponent;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithPlatformColor:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)invertedColor;
- (bool)isAlmostEqualToColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGrayscaleColor;
- (bool)isNearlyWhite;
- (bool)isOpaque;
- (id)lightenedColorByFactor:(double)arg1;
- (double)luminance;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)platformColor;
- (double)redComponent;
- (double)saturationComponent;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)highContrastBackgroundColorForPreset:(id)arg1;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)presetKinds;

- (bool)isThemeEquivalent:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)presetKind;

@end
