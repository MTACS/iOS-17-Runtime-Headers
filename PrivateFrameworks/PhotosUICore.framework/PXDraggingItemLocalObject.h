
@interface PXDraggingItemLocalObject : NSObject {
    PXAssetReference * _assetReference;
}

@property (nonatomic, readonly) PXAssetReference *assetReference;
@property (nonatomic, readonly) bool needsImport;

- (void).cxx_destruct;
- (id)assetReference;
- (id)init;
- (id)initWithAssetReference:(id)arg1;
- (bool)needsImport;

@end
