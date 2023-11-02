
@protocol PXAssetImportStatusObserver <NSObject>

@required

- (void)assetImportStatusManager:(id <PXAssetImportStatusManager>)arg1 didChangeStatusForAssetReference:(PXAssetReference *)arg2;

@end
