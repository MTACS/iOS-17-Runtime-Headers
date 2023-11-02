
@interface PRPosterDescriptor : NSObject <PRPosterContents, PRPosterContentsInternal> {
    PRPosterPathModelObjectCache * _cache;
    PRSPosterPath * _path;
    <BSInvalidatable> * _pathValidityExtension;
}

@property (nonatomic, readonly) PRSPosterPath *_path;
@property (nonatomic, readonly, copy) PRPosterAmbientConfiguration *ambientConfiguration;
@property (nonatomic, readonly) long long ambientSupportedDataLayout;
@property (nonatomic, readonly, copy) NSURL *assetDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptorIdentifier;
@property (nonatomic, readonly, copy) NSString *displayNameLocalizationKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) double luminance;
@property (nonatomic, readonly, copy) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (nonatomic, readonly, copy) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (nonatomic, readonly, copy) NSArray *preferredTimeFontConfigurations;
@property (nonatomic, readonly, copy) NSArray *preferredTitleColors;
@property (nonatomic, readonly, copy) NSString *role;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1;
- (id)_path;
- (void)_swapOutPathForPath:(id)arg1;
- (id)ambientConfiguration;
- (long long)ambientSupportedDataLayout;
- (id)assetDirectory;
- (void)dealloc;
- (id)description;
- (id)descriptorIdentifier;
- (id)displayNameLocalizationKey;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)loadConfigurableOptionsWithError:(out id*)arg1;
- (id)loadGalleryOptionsWithError:(out id*)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (double)luminance;
- (id)objectForUserInfoKey:(id)arg1;
- (id)preferredGalleryOptions;
- (id)preferredHomeScreenConfiguration;
- (id)preferredTimeFontConfigurations;
- (id)preferredTimeFontConfigurationsWithExtensionBundleURL:(id)arg1;
- (id)preferredTitleColors;
- (id)role;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (bool)pbf_isInitialPosterDescriptor;
- (id)pbf_posterProvider;
- (id)pbf_posterUUID;

@end
