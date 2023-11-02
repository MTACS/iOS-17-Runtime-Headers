
@interface PRPosterConfigurableOptions : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _ambientSupportedDataLayout;
    NSString * _displayNameLocalizationKey;
    double  _luminance;
    PRPosterDescriptorHomeScreenConfiguration * _preferredHomeScreenConfiguration;
    NSArray * _preferredTimeFontConfigurations;
    NSArray * _preferredTitleColors;
    NSString * _role;
}

@property (nonatomic) long long ambientSupportedDataLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (readonly) unsigned long long hash;
@property (nonatomic) double luminance;
@property (nonatomic, copy) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (nonatomic, copy) NSArray *preferredTimeFontConfigurations;
@property (nonatomic, copy) NSArray *preferredTitleColors;
@property (nonatomic, copy) NSString *role;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDisplayNameLocalizationKey:(id)arg1 role:(id)arg2 ambientSupportedDataLayout:(long long)arg3 preferredTimeFontConfigurations:(id)arg4 preferredTitleColors:(id)arg5 luminance:(double)arg6 preferredHomeScreenConfiguration:(id)arg7;
- (long long)ambientSupportedDataLayout;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayNameLocalizationKey;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayNameLocalizationKey:(id)arg1 ambientSupportedDataLayout:(long long)arg2 preferredTimeFontConfigurations:(id)arg3 preferredTitleColors:(id)arg4 luminance:(double)arg5 preferredHomeScreenConfiguration:(id)arg6;
- (id)initWithDisplayNameLocalizationKey:(id)arg1 role:(id)arg2 ambientSupportedDataLayout:(long long)arg3 preferredTimeFontConfigurations:(id)arg4 preferredTitleColors:(id)arg5 preferredHomeScreenConfiguration:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfigurableOptions:(id)arg1;
- (double)luminance;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredHomeScreenConfiguration;
- (id)preferredTimeFontConfigurations;
- (id)preferredTitleColors;
- (id)role;
- (void)setAmbientSupportedDataLayout:(long long)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setLuminance:(double)arg1;
- (void)setPreferredHomeScreenConfiguration:(id)arg1;
- (void)setPreferredTimeFontConfigurations:(id)arg1;
- (void)setPreferredTitleColors:(id)arg1;
- (void)setRole:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_configurableOptionsForPreview:(id)arg1;

@end
