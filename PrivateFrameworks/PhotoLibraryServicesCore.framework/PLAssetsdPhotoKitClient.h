
@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>

+ (bool)inTransactionProxy;
+ (bool)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 error:(id*)arg3;
+ (void)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 reply:(id /* block */)arg3;
+ (void)setInTransactionProxy:(bool)arg1 queue:(id)arg2;

- (id)clientName;
- (id)getUUIDsForAssetObjectIDs:(id)arg1 filterPredicate:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (bool)processUniversalSearchJITForAssetUUID:(id)arg1 processingTypes:(unsigned long long)arg2 error:(id*)arg3;
- (id)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)arg1 bundleID:(id)arg2 processingTypes:(unsigned long long)arg3 error:(id*)arg4;
- (id)resolveLocalIdentifiersForCloudIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)sendChangesRequest:(id)arg1 error:(id*)arg2;
- (void)sendChangesRequest:(id)arg1 reply:(id /* block */)arg2;

@end
