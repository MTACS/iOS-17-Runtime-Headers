
@interface PXContentSyndicationItem : NSObject <NSCopying> {
    <PXDisplayAssetCollection> * _assetCollection;
}

@property (nonatomic, readonly, copy) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)assetCollectionActionManager;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAssetCollection:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
