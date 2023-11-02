
@interface MIDriverKitBundle : MIExecutableBundle

+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(id /* block */)arg3 error:(id*)arg4;

- (id)currentOSVersionForValidationWithError:(id*)arg1;
- (id)initWithBundleParentURL:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id*)arg4;
- (id)minimumOSVersion;
- (bool)validateBundleMetadataWithError:(id*)arg1;

@end
