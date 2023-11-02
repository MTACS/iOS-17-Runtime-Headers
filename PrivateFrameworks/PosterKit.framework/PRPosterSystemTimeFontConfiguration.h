
@interface PRPosterSystemTimeFontConfiguration : PRPosterTimeFontConfiguration {
    bool  _systemItem;
    PRTimeFontConfiguration * _timeFontConfiguration;
    NSString * _timeFontIdentifier;
    double  _weight;
}

@property (nonatomic, readonly, copy) NSString *timeFontIdentifier;
@property (nonatomic, readonly) double weight;

+ (id)defaultTimeFontIdentifier;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_defaultWeightForTimeFontIdentifier:(id)arg1;
- (struct PRVariantWeightRange { unsigned long long x1; unsigned long long x2; })_validWeightRangeForTimeFontIdentifier:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeFontIdentifier:(id)arg1;
- (id)initWithTimeFontIdentifier:(id)arg1 systemItem:(bool)arg2;
- (id)initWithTimeFontIdentifier:(id)arg1 weight:(double)arg2 systemItem:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isSystemItem;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)arg1;
- (id)timeFontIdentifier;
- (id)uniqueIdentifier;
- (double)weight;

@end
