
@interface GEORouteBuilderOutput : NSObject {
    GEOMapRegion * _boundingMapRegion;
    NSArray * _cameraInfos;
    GEOComposedRouteCellularCoverage * _cellularCoverage;
    GEOComposedRouteCoordinateArray * _coordinatesArray;
    double  _distance;
    GEOElevationProfile * _elevationProfile;
    NSArray * _enrouteNotices;
    NSArray * _guidanceEvents;
    NSArray * _legs;
    NSArray * _pointSections;
    NSArray * _segments;
    NSArray * _steps;
    bool  _usesZilch;
    NSArray * _visualInfos;
    NSArray * _visualInfosForRouteNameLabels;
}

@property (nonatomic, retain) GEOMapRegion *boundingMapRegion;
@property (nonatomic, retain) NSArray *cameraInfos;
@property (nonatomic, retain) GEOComposedRouteCellularCoverage *cellularCoverage;
@property (nonatomic, retain) GEOComposedRouteCoordinateArray *coordinatesArray;
@property (nonatomic) double distance;
@property (nonatomic, retain) GEOElevationProfile *elevationProfile;
@property (nonatomic, retain) NSArray *enrouteNotices;
@property (nonatomic, retain) NSArray *guidanceEvents;
@property (nonatomic, retain) NSArray *legs;
@property (nonatomic, retain) NSArray *pointSections;
@property (nonatomic, retain) NSArray *segments;
@property (nonatomic, retain) NSArray *steps;
@property (nonatomic) bool usesZilch;
@property (nonatomic, retain) NSArray *visualInfos;
@property (nonatomic, retain) NSArray *visualInfosForRouteNameLabels;

- (void).cxx_destruct;
- (id)boundingMapRegion;
- (id)cameraInfos;
- (id)cellularCoverage;
- (id)coordinatesArray;
- (double)distance;
- (id)elevationProfile;
- (id)enrouteNotices;
- (id)guidanceEvents;
- (id)legs;
- (id)pointSections;
- (id)segments;
- (void)setBoundingMapRegion:(id)arg1;
- (void)setCameraInfos:(id)arg1;
- (void)setCellularCoverage:(id)arg1;
- (void)setCoordinatesArray:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setElevationProfile:(id)arg1;
- (void)setEnrouteNotices:(id)arg1;
- (void)setGuidanceEvents:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)setPointSections:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setUsesZilch:(bool)arg1;
- (void)setVisualInfos:(id)arg1;
- (void)setVisualInfosForRouteNameLabels:(id)arg1;
- (id)steps;
- (bool)usesZilch;
- (id)visualInfos;
- (id)visualInfosForRouteNameLabels;

@end
