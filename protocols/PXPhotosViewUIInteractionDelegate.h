
@protocol PXPhotosViewUIInteractionDelegate <NSObject>

@required

- (void)uiInteraction:(PXPhotosViewUIInteraction *)arg1 didChangeNavigatedAssetReference:(PXAssetReference *)arg2;
- (void)uiInteractionDidExtendSelection:(PXPhotosViewUIInteraction *)arg1;

@end
