
@interface PRPosterConfiguration : NSObject <PRPosterContents, PRPosterContentsInternal> {
    PRPosterPathModelObjectCache * _cache;
    PRSPosterPath * _path;
    <BSInvalidatable> * _pathValidityExtension;
}

@property (nonatomic, readonly) PRSPosterPath *_path;
@property (nonatomic, readonly, copy) NSURL *assetDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptorIdentifier;
@property (nonatomic, readonly, copy) NSString *displayNameLocalizationKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pbf_isLegacy;
@property (nonatomic, readonly, copy) NSString *role;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1;
- (void)_invalidate;
- (id)_path;
- (id)assetDirectory;
- (void)dealloc;
- (id)description;
- (id)descriptorIdentifier;
- (id)displayNameLocalizationKey;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)loadAmbientConfigurationWithError:(out id*)arg1;
- (id)loadComplicationLayoutWithError:(out id*)arg1;
- (id)loadConfigurableOptionsWithError:(out id*)arg1;
- (id)loadConfiguredPropertiesWithError:(out id*)arg1;
- (id)loadFocusConfigurationWithError:(out id*)arg1;
- (id)loadHomeScreenConfigurationWithError:(out id*)arg1;
- (id)loadOtherMetadataWithError:(out id*)arg1;
- (id)loadSuggestionMetadataWithError:(out id*)arg1;
- (id)loadTitleStyleConfigurationWithError:(out id*)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)objectForUserInfoKey:(id)arg1;
- (id)role;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (bool)pbf_isLegacy;
- (id)pbf_posterProvider;
- (id)pbf_posterUUID;

@end
