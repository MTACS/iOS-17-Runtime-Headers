
@protocol PXPlacesMapPipelineComponentProvider <NSObject>

@required

- (PXPlacesImageCache *)imageCache;
- (<PXPlacesMapLayout> *)layout;
- (<PXPlacesMapRenderer> *)renderer;
- (<PXPlacesMapSelectionHandler> *)selectionHandler;
- (void)setImageCache:(PXPlacesImageCache *)arg1;
- (<PXPlacesMapUpdatePlan> *)updatePlan;

@end
