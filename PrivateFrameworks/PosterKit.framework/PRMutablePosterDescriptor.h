
@interface PRMutablePosterDescriptor : PRPosterDescriptor

@property (nonatomic, copy) PRPosterAmbientConfiguration *ambientConfiguration;
@property (nonatomic) long long ambientSupportedDataLayout;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (nonatomic) double luminance;
@property (nonatomic, copy) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (nonatomic, copy) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (nonatomic, copy) NSArray *preferredTimeFontConfigurations;
@property (nonatomic, copy) NSArray *preferredTitleColors;
@property (nonatomic, copy) NSString *role;

+ (id)mutableDescriptorWithIdentifier:(id)arg1;
+ (id)mutableDescriptorWithIdentifier:(id)arg1 role:(id)arg2;

- (bool)copyContentsOfPath:(id)arg1 error:(out id*)arg2;
- (void)setAmbientConfiguration:(id)arg1;
- (void)setAmbientSupportedDataLayout:(long long)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setLuminance:(double)arg1;
- (bool)setObject:(id)arg1 forUserInfoKey:(id)arg2;
- (void)setPreferredGalleryOptions:(id)arg1;
- (void)setPreferredHomeScreenConfiguration:(id)arg1;
- (void)setPreferredTimeFontConfigurations:(id)arg1;
- (void)setPreferredTitleColors:(id)arg1;
- (void)setRole:(id)arg1;
- (bool)storeConfigurableOptions:(id)arg1 error:(out id*)arg2;
- (bool)storeGalleryOptions:(id)arg1 error:(out id*)arg2;
- (bool)storeUserInfo:(id)arg1 error:(out id*)arg2;

@end
