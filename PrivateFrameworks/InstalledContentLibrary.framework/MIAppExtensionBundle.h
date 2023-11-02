
@interface MIAppExtensionBundle : MIExecutableBundle {
    NSDictionary * _extensionCacheEntry;
    NSString * _extensionPointIdentifier;
    NSString * _validationOverrideParentBundleID;
}

@property (nonatomic, copy) NSDictionary *extensionCacheEntry;
@property (nonatomic, readonly, copy) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) bool targetsAppleExtensionPoint;
@property (nonatomic, copy) NSString *validationOverrideParentBundleID;

- (void).cxx_destruct;
- (Class)dataContainerClass;
- (id)dataContainerCreatingIfNeeded:(bool)arg1 forPersona:(id)arg2 makeLive:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
- (id)dataContainerForPersona:(id)arg1 error:(id*)arg2;
- (id)extensionCacheEntry;
- (id)extensionCacheEntryWithError:(id*)arg1;
- (id)extensionPointIdentifier;
- (id)initForTesting;
- (id)minimumOSVersion;
- (void)setBundleParentDirectoryURL:(id)arg1;
- (void)setExtensionCacheEntry:(id)arg1;
- (void)setValidationOverrideParentBundleID:(id)arg1;
- (bool)targetsAppleExtensionPoint;
- (bool)validateBundleMetadataWithError:(id*)arg1;
- (bool)validateHasNoDotInBundleIDSuffix:(id*)arg1;
- (id)validationOverrideParentBundleID;

@end
