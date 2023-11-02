
@interface CRGroupRegionGeometry : NSObject {
    double  _diagonalDistance;
    NSObject<CRTextRegion> * _firstTextRegion;
    CRGroupRegion * _groupRegion;
}

@property (readonly) double diagonalDistance;
@property (readonly) NSObject<CRTextRegion> *firstTextRegion;
@property (readonly) CRGroupRegion *groupRegion;

- (void).cxx_destruct;
- (double)_distanceFromQuad1:(id)arg1 toQuad2:(id)arg2;
- (double)calculateMinimumDistanceFromOtherGeometries:(id)arg1;
- (double)diagonalDistance;
- (id)firstTextRegion;
- (id)groupRegion;
- (id)initWithGroupRegion:(id)arg1;
- (bool)isIsolatedClosestRegionDistance:(double)arg1;
- (bool)shouldBeConsiderForFiltering;
- (bool)shouldBeConsideredForNearestDistanceCalculation;

@end
