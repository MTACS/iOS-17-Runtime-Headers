
@interface PXPlacesMapThumbnailClusterLayout : PXPlacesMapLayout {
    unsigned long long  _currentChangeType;
    <PXPlacesMapLayoutResult> * _currentMapLayoutResult;
    NSArray * _geotaggablesSortDescriptors;
    double  _horizontalClusteringDistancePixels;
    double  _verticalClusteringDistancePixels;
}

@property (nonatomic) unsigned long long currentChangeType;
@property (nonatomic, retain) <PXPlacesMapLayoutResult> *currentMapLayoutResult;
@property (nonatomic, retain) NSArray *geotaggablesSortDescriptors;
@property (nonatomic) double horizontalClusteringDistancePixels;
@property (nonatomic) double verticalClusteringDistancePixels;

- (void).cxx_destruct;
- (id)_clusterGeotaggables:(id)arg1 fromMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewPort:(id)arg3;
- (id)_clusterGeotaggables:(id)arg1 usingHorizontalClusteringDistance:(double)arg2 verticalClusteringDistance:(double)arg3 viewPort:(id)arg4 dataSource:(id)arg5 primaryLayoutGeotaggables:(id)arg6 maskToMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg7;
- (id)_clusterGeotaggablesInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewPort:(id)arg2;
- (id)_clusterGeotaggablesInViewPort:(id)arg1;
- (id)_handlePanToViewPort:(id)arg1 dataSourceChange:(id)arg2;
- (id)_handlePitchChangeToViewPort:(id)arg1 dataSourceChange:(id)arg2;
- (id)_handleZoomInToViewPort:(id)arg1;
- (id)_handleZoomOutToViewPort:(id)arg1;
- (id)_mutableSortedOrderdGeotaggablesSetFromSet:(id)arg1;
- (id)_primaryGeotaggleInLayoutItem:(id)arg1;
- (void)_sortGeotaggables:(id)arg1;
- (unsigned long long)_viewPortChangeTypeFrom:(id)arg1 to:(id)arg2;
- (bool)_zoom:(double)arg1 isEqualToZoom:(double)arg2;
- (unsigned long long)currentChangeType;
- (id)currentMapLayoutResult;
- (id)geotaggablesSortDescriptors;
- (double)horizontalClusteringDistancePixels;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (void)setCurrentChangeType:(unsigned long long)arg1;
- (void)setCurrentMapLayoutResult:(id)arg1;
- (void)setGeotaggablesSortDescriptors:(id)arg1;
- (void)setHorizontalClusteringDistancePixels:(double)arg1;
- (void)setVerticalClusteringDistancePixels:(double)arg1;
- (double)verticalClusteringDistancePixels;

@end
