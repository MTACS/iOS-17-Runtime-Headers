
@interface UIImageConfiguration : NSObject <NSCopying, NSSecureCoding, UIImageConfiguration> {
    bool  _ignoresDynamicType;
    NSLocale * _locale;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) bool _ignoresDynamicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *locale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

+ (id)configurationWithLocale:(id)arg1;
+ (id)configurationWithTraitCollection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyConfigurationValuesTo:(id)arg1;
- (id)_configurationIgnoringDynamicType;
- (bool)_ignoresDynamicType;
- (id)_init;
- (id)_initWithTraitCollection:(id)arg1;
- (id)_initWithTraitCollection:(id)arg1 locale:(id)arg2;
- (bool)_isEquivalentToConfiguration:(id)arg1;
- (bool)_isUnspecified;
- (bool)_shouldApplyConfiguration:(id)arg1;
- (id)configurationByApplyingConfiguration:(id)arg1;
- (id)configurationWithLocale:(id)arg1;
- (id)configurationWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)locale;
- (id)traitCollection;

@end
