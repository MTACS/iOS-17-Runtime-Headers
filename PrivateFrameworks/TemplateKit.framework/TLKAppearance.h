
@interface TLKAppearance : NSObject {
    double  _accessibilityContrastColorBoost;
    id  _compositingFilter;
    bool  _isDark;
    bool  _isVibrant;
    NSString * _name;
    unsigned long long  _style;
}

@property (readonly) double accessibilityContrastColorBoost;
@property (readonly) UIColor *backgroundColor;
@property (readonly) id compositingFilter;
@property (readonly) UIColor *groupedBackgroundColor;
@property (readonly) bool isDark;
@property (readonly) bool isVibrant;
@property (readonly) NSString *name;
@property (readonly) UIColor *platterColor;
@property (readonly) UIColor *primaryButtonColor;
@property (readonly) UIColor *primaryColor;
@property (readonly) UIColor *quaternaryButtonColor;
@property (readonly) UIColor *quaternaryColor;
@property (readonly) UIColor *quinaryColor;
@property (readonly) UIColor *secondaryButtonColor;
@property (readonly) UIColor *secondaryColor;
@property (readonly) unsigned long long style;
@property (readonly) UIColor *tertiaryButtonColor;
@property (readonly) UIColor *tertiaryColor;

+ (id)allAppearances;
+ (id)appearanceWithStyle:(unsigned long long)arg1;
+ (id)appearanceWithVibrancyEnabled:(bool)arg1 isDark:(bool)arg2;
+ (id)bestAppearanceForSystem;
+ (id)bestAppearanceForTraitCollection:(id)arg1;
+ (id)bestAppearanceForView:(id)arg1;
+ (id)colorWithRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3;
+ (void)disableAppearanceOverrideForView:(id)arg1;
+ (bool)viewHasOverriddenAppearance:(id)arg1;

- (void).cxx_destruct;
- (double)accessibilityContrastColorBoost;
- (id)backgroundColor;
- (id)buttonColorForProminence:(unsigned long long)arg1;
- (id)colorForProminence:(unsigned long long)arg1;
- (id)compositingFilter;
- (void)disableAppearanceForView:(id)arg1;
- (void)enableAppearanceForContainer:(id)arg1;
- (void)enableAppearanceForView:(id)arg1;
- (id)groupedBackgroundColor;
- (unsigned long long)hash;
- (bool)isDark;
- (bool)isEqual:(id)arg1;
- (bool)isVibrant;
- (id)name;
- (void)overrideAppearanceForView:(id)arg1;
- (id)platterColor;
- (id)primaryButtonColor;
- (id)primaryColor;
- (id)primaryColorWithDefaultAlpha:(double)arg1;
- (id)quaternaryButtonColor;
- (id)quaternaryColor;
- (id)quinaryColor;
- (id)secondaryButtonColor;
- (id)secondaryColor;
- (unsigned long long)style;
- (id)tertiaryButtonColor;
- (id)tertiaryColor;
- (id)textColorForColor:(long long)arg1;

@end
