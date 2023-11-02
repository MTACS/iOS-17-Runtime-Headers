
@protocol PXPlacesMapPipelineComponent <NSObject>

@required

- (<PXPlacesMapPipelineComponentProvider> *)pipelineComponentProvider;
- (void)reset;
- (void)setPipelineComponentProvider:(id <PXPlacesMapPipelineComponentProvider>)arg1;

@end
