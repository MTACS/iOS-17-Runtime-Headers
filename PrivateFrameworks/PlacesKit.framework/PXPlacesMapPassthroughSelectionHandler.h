
@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler> {
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)pipelineComponentProvider;
- (void)reset;
- (id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2;
- (void)setPipelineComponentProvider:(id)arg1;

@end
