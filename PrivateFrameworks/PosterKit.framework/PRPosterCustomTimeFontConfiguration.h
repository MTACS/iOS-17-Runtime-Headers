
@interface PRPosterCustomTimeFontConfiguration : PRPosterTimeFontConfiguration {
    NSString * _extensionBundleRelativeFilePath;
    NSString * _fontPostScriptName;
}

@property (nonatomic, readonly, copy) NSString *extensionBundleRelativeFilePath;
@property (nonatomic, readonly, copy) NSString *fontPostScriptName;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleRelativeFilePath;
- (id)fontPostScriptName;
- (id)fontWithExtensionBundleURL:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFont:(id)arg1 extensionBundle:(id)arg2;
- (id)initWithFont:(id)arg1 extensionBundleURL:(id)arg2;
- (id)initWithFontPostScriptName:(id)arg1 extensionBundleRelativeFilePath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)arg1;
- (id)uniqueIdentifier;

@end
