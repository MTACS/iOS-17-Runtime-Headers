
@interface MIEmbeddedWatchBundle : MIExecutableBundle {
    bool  _isPlaceholder;
}

@property (nonatomic, readonly) bool isApplicableToKnownWatchOSVersion;
@property (nonatomic, readonly) bool isPlaceholder;

- (bool)allowsAppleAppExtensionsNotInExtensionCache;
- (unsigned char)bundleType;
- (id)currentOSVersionForValidationWithError:(id*)arg1;
- (id)extensionKitBundlesPerformingPlatformValidation:(unsigned char)arg1 withError:(id*)arg2;
- (id)extensionKitBundlesWithError:(id*)arg1;
- (id)initWithParentBundle:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 isPlaceholder:(bool)arg4 error:(id*)arg5;
- (bool)isApplicableToKnownWatchOSVersion;
- (bool)isPlaceholder;
- (id)pluginKitBundlesPerformingPlatformValidation:(unsigned char)arg1 withError:(id*)arg2;
- (id)pluginKitBundlesWithError:(id*)arg1;

@end
