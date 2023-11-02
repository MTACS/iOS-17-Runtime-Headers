
@interface RMSubscriberStore : RMBaseStore <NSSecureCoding, RMAssetResolverProtocol>

+ (void)storeWithIdentifier:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)storesWithScope:(long long)arg1 completionHandler:(id /* block */)arg2;
+ (void)subscribedStoreConfigurationsMissingUIWithScope:(long long)arg1 configurationTypes:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)subscribedStoreDeclarationsWithScope:(long long)arg1 configurationTypes:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportsSecureCoding;
+ (void)unassignAssets:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;

- (void)_removeStatusForDeclarationIdentifier:(id)arg1 declarationServerToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_writeStatusForDeclaration:(id)arg1 validity:(bool)arg2 reasons:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)assetCannotBeDeserialized:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)assetCannotBeDownloaded:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)assetCannotBeVerified:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)assetEncounteredInternalError:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)assetSuccessfullyResolved:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)certificatePersistentRefForAssetKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)certificateStatusWithCompletionHandler:(id /* block */)arg1;
- (void)configurationCannotBeDeserialized:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)configurationErrorReasons:(id)arg1 reasons:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)configurationFailedAlreadyPresent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)configurationFailedToApply:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)configurationIsInvalid:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)configurationNotSupported:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)configurationRemovedWithDeclarationIdentifier:(id)arg1 declarationServerToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)configurationSuccessfullyApplied:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)configurationSuccessfullyApplied:(id)arg1 reasons:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStore:(id)arg1;
- (bool)isValidStatusItem:(Class)arg1;
- (void)publishStatus:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConfigurationUI:(id)arg1 visible:(bool)arg2 ui:(id)arg3 completionHandler:(id /* block */)arg4;

@end
