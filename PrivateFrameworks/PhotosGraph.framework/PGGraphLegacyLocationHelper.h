
@interface PGGraphLegacyLocationHelper : PGGraphLocationHelper

- (struct CLLocationCoordinate2D { double x1; double x2; })_approximateCoordinateForLocationNode:(id)arg1;
- (id)_closestLocationNodeFromLocationNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(id /* block */)arg3 reverse:(bool)arg4;
- (id)_commonNodeForLocationNode:(id)arg1 andLocationNode:(id)arg2;
- (bool)_locationNodesRepresentSameCity:(id)arg1;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)arg1;
- (id)_validLocationNodeForLocationNode:(id)arg1 withLocationMask:(unsigned long long)arg2;
- (id)cityNodeFromAddressNode:(id)arg1;
- (id)closestLocationNodeFromLocationNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(id /* block */)arg3;
- (id)closestLocationNodeFromLocationNode:(id)arg1 withDimension:(unsigned long long)arg2 reverse:(bool)arg3;
- (id)commonLocationNodeForRelevantLocationNodes:(id)arg1 locationMask:(unsigned long long)arg2;
- (id)countryNodeFromAddressNode:(id)arg1;
- (id)countyNodeFromCityNode:(id)arg1;
- (id)densestCloseLocationNodeFromLocationNode:(id)arg1 withDateInterval:(id)arg2 locationMask:(unsigned long long)arg3;
- (id)districtNodeFromAddressNode:(id)arg1;
- (bool)locationIsInSupersetCategoryForLocationNode:(id)arg1;
- (id)locationNodeWithDimension:(unsigned long long)arg1 rootNode:(id)arg2;
- (id)relevantAddressNodesForMomentNodes:(id)arg1 applyDensestCloseLocationNode:(bool)arg2;
- (id)relevantLocationNodesForMomentNodes:(id)arg1 applyDensestCloseLocationNode:(bool)arg2;

@end
