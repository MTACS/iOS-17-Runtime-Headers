
@interface PREditorColorPickerConstantColor : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, PREditorColorPickerColor> {
    PRPosterColor * _baseColor;
    PRPosterColor * _color;
    double  _initialVariation;
    NSString * _localizedName;
}

@property (nonatomic, readonly, copy) PRPosterColor *baseColor;
@property (nonatomic, readonly) PRPosterColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)baseColor;
- (id)color;
- (id)colorWithVariation:(double)arg1;
- (id)description;
- (id)displayColorWithVariation:(double)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithBaseUIColor:(id)arg1;
- (id)initWithBaseUIColor:(id)arg1 initialVariation:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 initialVariation:(double)arg2;
- (double)initialVariation;
- (bool)isCustomColor;
- (bool)isEqual:(id)arg1;
- (bool)isVibrantColor;
- (id)leftSliderColor;
- (id)localizedName;
- (id)rightSliderColor;
- (double)variationForLuminance:(double)arg1;

@end
