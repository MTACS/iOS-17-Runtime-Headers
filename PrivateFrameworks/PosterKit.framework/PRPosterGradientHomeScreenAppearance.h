
@interface PRPosterGradientHomeScreenAppearance : PRPosterHomeScreenAppearance {
    PRPosterColor * _color;
    PREditorColorPickerConfiguration * _colorPickerConfiguration;
}

@property (nonatomic, readonly, copy) PRPosterColor *color;
@property (nonatomic, readonly, copy) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (nonatomic, readonly, copy) PRPosterColor *effectiveColor;
@property (nonatomic, readonly, copy) NSArray *gradientColors;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)color;
- (id)colorPickerConfiguration;
- (id)description;
- (id)effectiveColor;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gradientColors;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 colorPickerConfiguration:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
