
@protocol PXAssetImportStatusManager <NSObject>

@required

- (void)addAssetImportStatusObserver:(id <PXAssetImportStatusObserver>)arg1;
- (long long)importStateForAsset:(id <PXDisplayAsset>)arg1;
- (void)removeAssetImportStatusObserver:(id <PXAssetImportStatusObserver>)arg1;

@end
