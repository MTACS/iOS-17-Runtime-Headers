
@interface NTKFaceColorScheme : NSObject {
    NSMutableDictionary * _colorsByUnit;
    bool  _containsOverrideFaceColor;
    CLKDevice * _device;
    NTKFaceColorPalette * _faceColorPalette;
    NSArray * _faceColors;
    double  _multicolorAlpha;
}

@property (nonatomic, readonly) UIColor *accentColor;
@property (nonatomic, readonly) UIColor *activityTickColor;
@property (nonatomic, readonly) UIColor *alternativeTickColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic) bool containsOverrideFaceColor;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, retain) NTKFaceColorPalette *faceColorPalette;
@property (nonatomic, retain) NSArray *faceColors;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic) double multicolorAlpha;
@property (nonatomic, readonly) UIColor *secondaryForegroundColor;
@property (nonatomic, readonly) UIColor *shiftedBackgroundColor;
@property (nonatomic, readonly) UIColor *shiftedForegroundColor;
@property (nonatomic, readonly) UIColor *stackedImagesForegroundColor;
@property (nonatomic, readonly) UIColor *tickColor;
@property (nonatomic, readonly) unsigned long long units;
@property (nonatomic, readonly) UIColor *upNextTextColor;

+ (id)colorSchemeForDevice:(id)arg1 withFaceColorPalette:(id)arg2 foregroundColor:(id)arg3 units:(unsigned long long)arg4 alternateHighlight:(bool)arg5;
+ (id)colorSchemeForDevice:(id)arg1 withFaceColorPalette:(id)arg2 units:(unsigned long long)arg3;
+ (id)interpolationForDevice:(id)arg1 fromFaceColorPalette:(id)arg2 toFaceColorPalette:(id)arg3 fraction:(double)arg4 units:(unsigned long long)arg5 brightenUnits:(unsigned long long)arg6 overrideColor:(id)arg7 alternateHighlight:(bool)arg8;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3 brightenUnits:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)_colorForUnit:(unsigned long long)arg1;
- (void)_setColor:(id)arg1 forUnit:(unsigned long long)arg2;
- (id)accentColor;
- (id)activityTickColor;
- (id)alternativeTickColor;
- (id)backgroundColor;
- (bool)containsOverrideFaceColor;
- (id)device;
- (id)faceColorPalette;
- (id)faceColors;
- (id)foregroundColor;
- (id)initForDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)multicolorAlpha;
- (id)secondaryForegroundColor;
- (void)setContainsOverrideFaceColor:(bool)arg1;
- (void)setFaceColorPalette:(id)arg1;
- (void)setFaceColors:(id)arg1;
- (void)setMulticolorAlpha:(double)arg1;
- (id)shiftedBackgroundColor;
- (id)shiftedForegroundColor;
- (id)stackedImagesForegroundColor;
- (id)tickColor;
- (unsigned long long)units;
- (id)upNextTextColor;

@end
