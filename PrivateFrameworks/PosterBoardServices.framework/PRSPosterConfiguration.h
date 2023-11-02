
@interface PRSPosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    PRSPosterPath * _path;
    <BSInvalidatable> * _pathValidityExtension;
}

@property (nonatomic, readonly) PRSPosterPath *_path;
@property (nonatomic, readonly, copy) NSURL *assetDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *role;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

+ (id)decodeFromPersistableRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1;
- (id)_path;
- (id)assetDirectory;
- (void)dealloc;
- (id)description;
- (id)descriptorIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPersistable:(id)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)persistableRepresentationWithError:(out id*)arg1;
- (id)providerBundleIdentifier;
- (id)role;
- (id)serverUUID;

// Image: /System/Library/PrivateFrameworks/AmbientUI.framework/AmbientUI

- (id)amui_getConfiguredDisplayNameWithError:(out id*)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (id)pr_loadAmbientConfigurationWithError:(out id*)arg1;
- (id)pr_loadAmbientWidgetLayoutWithError:(out id*)arg1;
- (id)pr_loadColorVariationsWithError:(out id*)arg1;
- (id)pr_loadComplicationLayoutWithError:(out id*)arg1;
- (id)pr_loadConfiguredPropertiesWithError:(out id*)arg1;
- (id)pr_loadFocusConfigurationWithError:(out id*)arg1;
- (id)pr_loadHomeScreenConfigurationWithError:(out id*)arg1;
- (id)pr_loadOtherMetadataWithError:(out id*)arg1;
- (id)pr_loadSuggestionMetadataWithError:(out id*)arg1;
- (id)pr_loadTitleStyleConfigurationWithError:(out id*)arg1;
- (id)pr_modelObjectCache;
- (id)pr_posterProvider;
- (id)pr_posterUUID;
- (bool)pr_storeAmbientWidgetLayout:(id)arg1 error:(out id*)arg2;

@end
