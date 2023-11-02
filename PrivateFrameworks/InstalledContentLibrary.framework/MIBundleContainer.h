
@interface MIBundleContainer : MIContainer {
    MIExecutableBundle * _bundle;
    MIBundleMetadata * _bundleMetadata;
}

@property (nonatomic, readonly) MIExecutableBundle *bundle;
@property (nonatomic, readonly) unsigned int bundleMaxLinkedSDKVersion;
@property (nonatomic, copy) MIBundleMetadata *bundleMetadata;
@property (nonatomic, readonly) NSURL *bundleMetadataURL;
@property (nonatomic, readonly) NSURL *compatibilityLinkDestination;
@property (nonatomic, readonly) bool hasParallelPlaceholder;
@property (nonatomic, readonly) NSURL *iTunesMetadataURL;
@property (nonatomic, readonly) NSURL *parallelPlaceholderURL;
@property (nonatomic, readonly) NSURL *referenceStorageURL;
@property (nonatomic, readonly) bool shouldHaveCorrespondingDataContainer;
@property (nonatomic, readonly) NSURL *stashBaseURL;

+ (id)allAppBundleContainersWithError:(id*)arg1;
+ (id)appBundleContainerForIdentifier:(id)arg1 inDomain:(unsigned long long)arg2 withError:(id*)arg3;
+ (id)appBundleContainerForIdentifier:(id)arg1 temporary:(bool)arg2 inDomain:(unsigned long long)arg3 withError:(id*)arg4;
+ (id)appBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(bool)arg2 created:(bool*)arg3 error:(id*)arg4;
+ (id)pluginKitPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(bool)arg2 created:(bool*)arg3 error:(id*)arg4;
+ (id)privateAppBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(bool)arg2 created:(bool*)arg3 error:(id*)arg4;
+ (id)privateTempAppBundleContainerWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)tempAppBundleContainerWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)tempAppBundleContainerWithIdentifier:(id)arg1 inDomain:(unsigned long long)arg2 withError:(id*)arg3;
+ (id)tempPluginKitPluginBundleContainerWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)updateSinfDataForAppWithIdentifier:(id)arg1 sinfData:(id)arg2 error:(id*)arg3;
+ (bool)updateiTunesMetadataForAppWithIdentifier:(id)arg1 plistData:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_bundleExtensionForContainerClassWithError:(id*)arg1;
- (bool)_configureBundleWithError:(id*)arg1;
- (id)_stashURLForIndex:(unsigned long long)arg1;
- (id)_stashedBundleContainerForIndex:(unsigned long long)arg1 error:(id*)arg2;
- (bool)bestEffortRollbackiTunesMetadata:(id)arg1 error:(id*)arg2;
- (id)bundle;
- (unsigned int)bundleMaxLinkedSDKVersion;
- (id)bundleMetadata;
- (id)bundleMetadataURL;
- (id)bundleMetadataWithError:(id*)arg1;
- (bool)captureBundleByMoving:(id)arg1 withError:(id*)arg2;
- (bool)cloneContentFromStashedBundleContainer:(id)arg1 error:(id*)arg2;
- (id)compatibilityLinkDestination;
- (bool)hasParallelPlaceholder;
- (id)iTunesMetadataURL;
- (id)initForAppContainerWithURL:(id)arg1;
- (id)initWithContainer:(id)arg1 error:(id*)arg2;
- (id)initWithToken:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 withError:(id*)arg4;
- (id)parallelPlaceholderURL;
- (id)referenceStorageURL;
- (bool)saveBundleMetadata:(id)arg1 withError:(id*)arg2;
- (void)setBundleMetadata:(id)arg1;
- (bool)shouldHaveCorrespondingDataContainer;
- (id)stashBaseURL;
- (bool)stashBundleContainerContents:(id)arg1 error:(id*)arg2;
- (id)stashedBundleContainerWithError:(id*)arg1;
- (bool)transferExistingStashesFromContainer:(id)arg1 error:(id*)arg2;
- (bool)writeiTunesMetadata:(id)arg1 error:(id*)arg2;

@end
