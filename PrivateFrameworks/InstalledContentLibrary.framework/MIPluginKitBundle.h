
@interface MIPluginKitBundle : MIAppExtensionBundle {
    NSDictionary * _extensionAttributes;
    NSString * _extensionPointIdentifier;
    NSDictionary * _overlaidInfoPlist;
}

@property (nonatomic, readonly, copy) NSString *exExtensionPointIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *extensionAttributes;
@property (nonatomic, readonly) bool isFileProviderNonUIExtension;
@property (nonatomic, readonly) bool isMapsGeoServicesExtension;
@property (nonatomic, readonly) bool isMessagePayloadProviderExtension;
@property (nonatomic, readonly) bool isSiriIntentsExtension;
@property (nonatomic, readonly) bool isSiriIntentsUIExtension;
@property (nonatomic, readonly) bool isWatchKitExtension;
@property (nonatomic, readonly, copy) NSString *nsExtensionPointIdentifier;
@property (nonatomic, copy) NSDictionary *overlaidInfoPlist;

+ (id)bundlesInParentBundle:(id)arg1 overrideParentBundleIDForValidation:(id)arg2 subDirectory:(id)arg3 matchingPredicate:(id /* block */)arg4 error:(id*)arg5;
+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(id /* block */)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_overlayDictionary:(id)arg1 onDictionary:(id)arg2;
- (bool)_validateNSExtensionWithOverlaidDictionary:(id)arg1 error:(id*)arg2;
- (bool)_validateXPCServiceWithOverlaidDictionary:(id)arg1 error:(id*)arg2;
- (id)currentOSVersionForValidationWithError:(id*)arg1;
- (id)exExtensionPointIdentifier;
- (id)extensionAttributes;
- (id)extensionPointIdentifier;
- (bool)isFileProviderNonUIExtension;
- (bool)isMapsGeoServicesExtension;
- (bool)isMessagePayloadProviderExtension;
- (bool)isSiriIntentsExtension;
- (bool)isSiriIntentsUIExtension;
- (bool)isWatchKitExtension;
- (id)nsExtensionPointIdentifier;
- (id)overlaidInfoPlist;
- (id)overlaidInfoPlistWithError:(id*)arg1;
- (void)setOverlaidInfoPlist:(id)arg1;
- (bool)validateBundleMetadataWithError:(id*)arg1;

@end
