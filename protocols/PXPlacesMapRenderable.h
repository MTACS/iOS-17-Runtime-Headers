
@protocol PXPlacesMapRenderable <NSObject>

@required

- (NSOrderedSet *)geotaggables;
- (long long)index;
- (<PXPlacesMapRenderer> *)renderer;
- (<PXPlacesMapSelectionHandler> *)selectionHandler;
- (void)setGeotaggables:(NSOrderedSet *)arg1;
- (void)setIndex:(long long)arg1;
- (void)setRenderer:(id <PXPlacesMapRenderer>)arg1;
- (void)setSelectionHandler:(id <PXPlacesMapSelectionHandler>)arg1;

@end
