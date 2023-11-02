
@interface VKPolylineOverlay : NSObject <GEOComposedRouteObserver, VKRouteOverlay> {
    GEOComposedRoute * _composedRoute;
    bool  _hasFocus;
    bool  _isReadyForSnapping;
    struct __CFSet { } * _observers;
    VKRouteLine * _routeRibbon;
    <VKPolylineOverlayRouteRibbonObserver> * _routeRibbonObserver;
    bool  _selected;
    bool  _showTraffic;
    GEOComposedRouteTraffic * _traffic;
    struct unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>> { 
        struct __compressed_pair<md::TrafficSegmentsAlongRoute *, std::default_delete<md::TrafficSegmentsAlongRoute>> { 
            struct TrafficSegmentsAlongRoute {} *__value_; 
        } __ptr_; 
    }  _trafficSegments;
    double  _trafficTimeStamp;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) bool containsTransit;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFocus;
@property (readonly) unsigned long long hash;
@property (nonatomic) VKRouteLine *routeRibbon;
@property (nonatomic) <VKPolylineOverlayRouteRibbonObserver> *routeRibbonObserver;
@property (nonatomic) bool selected;
@property (nonatomic) bool showTraffic;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOComposedRouteTraffic *traffic;
@property (nonatomic, readonly) double trafficTimeStamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (void)_setNeedsLayout;
- (void)addObserver:(id)arg1;
- (id)boundingMapRegion;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (id)composedRoute;
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (bool)containsTransit;
- (struct { double x1; double x2; })coordinate;
- (struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; })createDebugNode;
- (void)createMatchedSegmentAndAddToPaths:(id)arg1 section:(id)arg2 pathStartIndex:(unsigned int)arg3 pathEndIndex:(unsigned int)arg4 shouldGenerateSnapPath:(bool)arg5;
- (void)dealloc;
- (id)getPathsForRenderRegion:(id)arg1 shouldSnapToRoads:(bool)arg2 shouldGenerateSnapPath:(bool)arg3 verifySnapping:(bool)arg4 isGradientTraffic:(bool)arg5 observer:(id)arg6;
- (bool)hasFocus;
- (id)initWithComposedRoute:(id)arg1 traffic:(id)arg2;
- (bool)isSnappingForSceneTiles;
- (void)removeObserver:(id)arg1;
- (id)routeRibbon;
- (id)routeRibbonObserver;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionRangeForBounds:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })arg1;
- (bool)selected;
- (void)setHasFocus:(bool)arg1;
- (void)setRouteRibbon:(id)arg1;
- (void)setRouteRibbonObserver:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowTraffic:(bool)arg1;
- (bool)showTraffic;
- (id)traffic;
- (double)trafficTimeStamp;
- (void)updateTraffic:(id)arg1;

@end
