
@protocol PREditorColorPickerColor <NSObject>

@required

- (PRPosterColor *)baseColor;
- (PRPosterColor *)colorWithVariation:(double)arg1;
- (PRPosterColor *)displayColorWithVariation:(double)arg1;
- (double)initialVariation;
- (bool)isCustomColor;
- (bool)isVibrantColor;
- (PRPosterColor *)leftSliderColor;
- (NSString *)localizedName;
- (PRPosterColor *)rightSliderColor;

@end
