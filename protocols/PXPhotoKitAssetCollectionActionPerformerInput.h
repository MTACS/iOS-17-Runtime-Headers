
@protocol PXPhotoKitAssetCollectionActionPerformerInput <NSObject>

@optional

- (PXAssetsDataSource *)assetsDataSource;
- (PHFetchResult *)assetsFetchResult;
- (<UIDragSession> *)dragSession;
- (<UIDropSession> *)dropSession;
- (PXAssetReference *)dropTargetAssetReference;
- (<PXMemoryAssetsActionFactory> *)memoryAssetsActionFactory;
- (PHFetchResult *)people;
- (<UITraitEnvironment> *)traitEnvironment;

@end
