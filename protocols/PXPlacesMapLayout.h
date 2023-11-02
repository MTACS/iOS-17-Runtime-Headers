
@protocol PXPlacesMapLayout <PXPlacesMapPipelineComponent>

@required

- (<PXPlacesGeotaggedItemDataSource> *)dataSource;
- (<PXPlacesMapLayoutResult> *)layoutForViewPort:(PXPlacesMapViewPort *)arg1 andDataSourceChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg2;
- (<PXPlacesMapLayoutItem> *)layoutItemForGeotaggable:(id <PXPlacesGeotaggable>)arg1;

@end
