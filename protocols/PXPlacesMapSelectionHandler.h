
@protocol PXPlacesMapSelectionHandler <PXPlacesMapPipelineComponent>

@required

- (NSOrderedSet *)selectedGeotaggablesForRenderable:(id <PXPlacesMapRenderable>)arg1 mapView:(PXPlacesMapView *)arg2;

@end
