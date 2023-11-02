
@interface PRPosterTitleStyleConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
}

@property (getter=isAlternateDateEnabled, nonatomic, readonly) bool alternateDateEnabled;
@property (nonatomic, readonly) double contentsLuminance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *effectiveTimeNumberingSystem;
@property (nonatomic, readonly, copy) PRPosterColor *effectiveTitleColor;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long preferredTitleAlignment;
@property (nonatomic, readonly) unsigned long long preferredTitleLayout;
@property (nonatomic, readonly) bool prefersVerticalTitleLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (nonatomic, readonly, copy) NSString *timeNumberingSystem;
@property (nonatomic, readonly, copy) PRPosterColor *titleColor;
@property (getter=isUserConfigured, nonatomic, readonly) bool userConfigured;
@property (nonatomic, readonly, copy) BSUIVibrancyConfiguration *vibrancyConfiguration;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (double)defaultContentsLuminance;
+ (id)defaultTimeFont;
+ (id)defaultTimeNumberingSystem;
+ (unsigned long long)defaultTitleAlignment;
+ (id)defaultTitleColor;
+ (id)defaultTitleFontForRole:(id)arg1;
+ (unsigned long long)defaultTitleLayout;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_vibrancyConfigurationWithExtensionBundleURL:(id)arg1 luminanceReduced:(bool)arg2;
- (void)appendDescriptionToFormatter:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveTimeFontWithExtensionBundle:(id)arg1;
- (id)effectiveTimeFontWithExtensionBundle:(id)arg1 forRole:(id)arg2;
- (id)effectiveTimeFontWithExtensionBundleURL:(id)arg1;
- (id)effectiveTimeFontWithExtensionBundleURL:(id)arg1 forRole:(id)arg2;
- (id)effectiveTimeNumberingSystem;
- (unsigned long long)effectiveTitleAlignmentForText:(id)arg1 withFont:(id)arg2;
- (id)effectiveTitleColor;
- (unsigned long long)effectiveTitleLayoutForText:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeFontConfiguration:(id)arg1 preferredTitleAlignment:(unsigned long long)arg2 preferredTitleLayout:(unsigned long long)arg3 titleColor:(id)arg4 timeNumberingSystem:(id)arg5 userConfigured:(bool)arg6 contentsLuminance:(double)arg7 alternateDateEnabled:(bool)arg8 groupName:(id)arg9;
- (id)initWithTimeFontConfiguration:(id)arg1 titleColor:(id)arg2;
- (id)initWithTimeFontConfiguration:(id)arg1 titleColor:(id)arg2 timeNumberingSystem:(id)arg3;
- (id)initWithTitleStyleConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isVisiblyEqualToTitleStyleConfiguration:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)prefersVerticalTitleLayout;
- (id)resolvedWithLookDefaultTitleStyleConfiguration:(id)arg1 allowTitleColorUpdates:(bool)arg2 allowTitleFontUpdates:(bool)arg3;
- (id)vibrancyConfiguration;
- (id)vibrancyConfigurationWithExtensionBundle:(id)arg1;
- (id)vibrancyConfigurationWithExtensionBundle:(id)arg1 luminanceReduced:(bool)arg2;
- (id)vibrancyConfigurationWithExtensionBundleURL:(id)arg1;
- (id)vibrancyConfigurationWithExtensionBundleURL:(id)arg1 luminanceReduced:(bool)arg2;

@end
