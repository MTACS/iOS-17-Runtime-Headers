
@protocol PXTilingControllerTransitionDelegate <NSObject>

@optional

- (void)tilingController:(PXTilingController *)arg1 prepareForChange:(PXTilingChange *)arg2;
- (<PXTileIdentifierConverter> *)tilingController:(PXTilingController *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (<PXTileTransitionAnimationCoordinator> *)tilingController:(PXTilingController *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;

@end
