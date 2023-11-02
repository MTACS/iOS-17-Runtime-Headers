
@interface PRPosterDescriptorHomeScreenConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _allowsModifyingLegibilityBlur;
    NSArray * _preferredGradientColors;
    NSArray * _preferredSolidColors;
    unsigned long long  _preferredStyle;
}

@property (nonatomic) bool allowsModifyingLegibilityBlur;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *preferredGradientColors;
@property (nonatomic, copy) NSArray *preferredSolidColors;
@property (nonatomic) unsigned long long preferredStyle;
@property (readonly) Class superclass;

+ (id)defaultHomeScreenConfigurationForProvider:(id)arg1 role:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsModifyingLegibilityBlur;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredSolidColors:(id)arg1;
- (id)initWithPreferredSolidColors:(id)arg1 preferredGradientColors:(id)arg2;
- (id)initWithPreferredStyle:(unsigned long long)arg1;
- (id)initWithPreferredStyle:(unsigned long long)arg1 allowsModifyingLegibilityBlur:(bool)arg2 preferredSolidColors:(id)arg3 preferredGradientColors:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredGradientColors;
- (id)preferredSolidColors;
- (unsigned long long)preferredStyle;
- (void)setAllowsModifyingLegibilityBlur:(bool)arg1;
- (void)setPreferredGradientColors:(id)arg1;
- (void)setPreferredSolidColors:(id)arg1;
- (void)setPreferredStyle:(unsigned long long)arg1;

@end
