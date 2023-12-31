
@interface PXAssetReference : PXSectionedObjectReference <PXAssetReferenceProtocol>

@property (nonatomic, readonly) id asset;
@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) id assetCollection;
@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } simpleIndexPath;
@property (readonly) Class superclass;

- (id)asset;
- (id)assetCollection;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })simpleIndexPath;

@end
