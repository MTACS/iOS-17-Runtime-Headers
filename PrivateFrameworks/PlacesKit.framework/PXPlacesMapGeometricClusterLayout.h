
@interface PXPlacesMapGeometricClusterLayout : PXPlacesMapLayout {
    double  _clusteringDistance;
}

@property (nonatomic) double clusteringDistance;

- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;
- (id)_findClusterOverlappingGeotaggable:(id)arg1 fromClusters:(id)arg2 forViewPort:(id)arg3;
- (bool)_shapeAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 overlapsShapeAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 forViewPort:(id)arg3;
- (double)clusteringDistance;
- (id)init;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (void)setClusteringDistance:(double)arg1;

@end
