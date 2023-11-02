
@protocol PXZoomablePhotosInteractionDelegate <NSObject>

@required

- (PXAssetReference *)zoomablePhotosInteraction:(PXZoomablePhotosInteraction *)arg1 assetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)zoomablePhotosInteractionShouldBegin:(PXZoomablePhotosInteraction *)arg1;
- (void)zoomablePhotosInteractionWillBegin:(PXZoomablePhotosInteraction *)arg1;

@end
