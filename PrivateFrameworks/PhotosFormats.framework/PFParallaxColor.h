
@interface PFParallaxColor : NSObject <NSSecureCoding> {
    struct CGColor { } * _cgColor;
    void _lhc;
    void _srgb;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) NSArray *RGBValues;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double chroma;
@property (nonatomic, readonly) PFParallaxColor *complementaryColor;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) bool isCool;
@property (nonatomic, readonly) bool isWarm;
@property (nonatomic, readonly) double luma;
@property (nonatomic, readonly) double luminance;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } pt;
@property (nonatomic, readonly) UIColor *pu_UIColor;
@property (nonatomic, readonly) double pu_chromaVariation;
@property (nonatomic, readonly) double pu_lumaVariation;
@property (nonatomic, readonly) double pu_toneVariation;
@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double tone;

// Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats

+ (id)blackColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithRGBValues:(id)arg1 error:(id*)arg2;
+ (id)colorWithTone:(double)arg1 hue:(double)arg2;
+ (id)coolColor;
+ (bool)supportsSecureCoding;
+ (id)warmColor;
+ (id)whiteColor;

- (struct CGColor { }*)CGColor;
- (id)RGBValues;
- (double)blue;
- (double)chroma;
- (id)complementaryColor;
- (void)dealloc;
- (id)debugQuickLookObject;
- (double)deltaE94DistanceToColor:(id)arg1;
- (id)description;
- (double)distanceToColor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)green;
- (double)hue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHue:(double)arg1 tone:(double)arg2;
- (id)initWithLuma:(double)arg1 hue:(double)arg2 chroma:(double)arg3;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (bool)isCool;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParallaxColor:(id)arg1;
- (bool)isWarm;
- (double)luma;
- (double)luminance;
- (struct CGPoint { double x1; double x2; })pt;
- (double)red;
- (double)tone;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)pu_parallaxColorWithHue:(double)arg1 chroma:(double)arg2 lumaVariation:(double)arg3;
+ (id)pu_parallaxColorWithHue:(double)arg1 toneVariation:(double)arg2;
+ (id)pu_parallaxColorWithLuma:(double)arg1 hue:(double)arg2 chromaVariation:(double)arg3;
+ (id)pu_parallaxColorWithUIColor:(id)arg1;

- (id)pu_UIColor;
- (double)pu_chromaVariation;
- (double)pu_lumaVariation;
- (double)pu_toneVariation;

@end
