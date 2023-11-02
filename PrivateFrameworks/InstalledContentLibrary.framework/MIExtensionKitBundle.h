
@interface MIExtensionKitBundle : MIAppExtensionBundle {
    NSDictionary * _extensionAttributes;
    NSString * _extensionPointIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *extensionAttributes;

+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(id /* block */)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_validateDelegateClassWithError:(id*)arg1;
- (bool)_validatePresenceOfSwiftEntrySectionInFile:(int)arg1 shouldHaveSwiftEntry:(bool)arg2 withError:(id*)arg3;
- (id)extensionAttributes;
- (id)extensionPointIdentifier;
- (bool)getMayTargetThirdPartyExtensionPoint:(bool*)arg1 withError:(id*)arg2;
- (bool)validateBundleMetadataWithError:(id*)arg1;

@end
