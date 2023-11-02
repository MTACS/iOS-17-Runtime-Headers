
@interface PLAssetsdPhotoKitAddClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>

- (id)clientName;
- (bool)sendChangesRequest:(id)arg1 error:(id*)arg2;
- (void)sendChangesRequest:(id)arg1 reply:(id /* block */)arg2;

@end
