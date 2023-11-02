
@protocol PXPhotosViewDelegate <NSObject>

@optional

- (bool)allowsContextMenuInteractionForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (void)containerWasDeletedForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (NSAttributedString *)customNoContentFallbackMessage;
- (NSString *)customNoContentFallbackTitle;
- (UIView *)headerViewForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (<PXMemoryAssetsActionFactory> *)memoryAssetsActionFactory;
- (NSArray *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 accessoriesForContextMenuInteraction:(UIContextMenuInteraction *)arg2 assetReference:(PXAssetReference *)arg3;
- (PXGAnimation *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 animationForProposedAnimation:(PXGAnimation *)arg2;
- (bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 canPlayAssetInline:(id <PXDisplayAsset>)arg2;
- (void)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 commitPreviewViewControllerForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (UIContextMenuConfiguration *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 configurationForContextMenuInteraction:(UIContextMenuInteraction *)arg2 assetReference:(PXAssetReference *)arg3;
- (_UIContextMenuStyle *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 styleForMenuWithConfiguration:(UIContextMenuConfiguration *)arg3;
- (void)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 willEndForConfiguration:(UIContextMenuConfiguration *)arg3 animator:(id <UIContextMenuInteractionAnimating>)arg4;
- (void)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 didDoubleTapAssetReference:(PXAssetReference *)arg2;
- (bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 didPickAssetReference:(PXAssetReference *)arg2;
- (NSItemProvider *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 dragItemProviderForAssetReference:(PXAssetReference *)arg2;
- (bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 isAssetEligibleForAutoPlayback:(id <PXDisplayAsset>)arg2;
- (bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 isAssetEligibleForPlaybackWithSettlingEffect:(id <PXDisplayAsset>)arg2;
- (unsigned long long)photosViewControllerFilterSortedRecordsStrategy:(NSObject<PXAnonymousViewController> *)arg1;
- (bool)shouldAnimateFromHeaderView:(UIView *)arg1 toHeaderView:(UIView *)arg2;

@end
