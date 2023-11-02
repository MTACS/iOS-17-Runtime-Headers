
@interface PREditorColorPickerVibrantMonotoneColor : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, PREditorColorPickerColor> {
    PRPosterColor * _activeDisplayColor;
    PRPosterColor * _color;
    double  _contentsLuminance;
    NSDictionary * _displayColors;
    NSString * _localizedName;
}

@property (nonatomic, copy) PRPosterColor *activeDisplayColor;
@property (nonatomic, readonly, copy) PRPosterColor *baseColor;
@property (nonatomic, readonly) PRPosterColor *color;
@property (nonatomic) double contentsLuminance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *displayColors;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double initialVariation;
@property (readonly) bool isCustomColor;
@property (readonly) bool isVibrantColor;
@property (nonatomic, readonly) PRPosterColor *leftSliderColor;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) PRPosterColor *rightSliderColor;
@property (readonly) Class superclass;

+ (double)luminanceForPosterColor:(id)arg1 withAppliedVariation:(double)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDisplayColor;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)baseColor;
- (id)color;
- (id)colorWithVariation:(double)arg1;
- (double)contentsLuminance;
- (id)description;
- (id)displayColorWithVariation:(double)arg1;
- (id)displayColors;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 displayColors:(id)arg2;
- (id)initWithColor:(id)arg1 displayColors:(id)arg2 localizedName:(id)arg3;
- (double)initialVariation;
- (bool)isCustomColor;
- (bool)isEqual:(id)arg1;
- (bool)isVibrantColor;
- (id)leftSliderColor;
- (id)localizedName;
- (id)rightSliderColor;
- (void)setActiveDisplayColor:(id)arg1;
- (void)setContentsLuminance:(double)arg1;
- (double)variationForAlpha:(double)arg1;

@end
