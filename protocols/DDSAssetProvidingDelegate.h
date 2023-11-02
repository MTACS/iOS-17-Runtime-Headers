
@protocol DDSAssetProvidingDelegate <NSObject>

@required

- (void)didBeginUpdateCatalog;
- (void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(DDSAsset *)arg2;
- (void)didCompleteDownloadForAssertion:(DDSAssertion *)arg1 error:(NSError *)arg2;
- (void)didCompleteDownloadForAssertions:(NSSet *)arg1 error:(NSError *)arg2;
- (void)didUpdateCatalogWithAssetType:(NSString *)arg1 error:(NSError *)arg2;

@end
