
@interface PRPosterMutableConfigurableOptions : PRPosterConfigurableOptions

@property (nonatomic) long long ambientSupportedDataLayout;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (nonatomic) double luminance;
@property (nonatomic, copy) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (nonatomic, copy) NSArray *preferredTimeFontConfigurations;
@property (nonatomic, copy) NSArray *preferredTitleColors;
@property (nonatomic, copy) NSString *role;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

@end
