
@interface VKRouteLine : NSObject {
    struct Box<double, 3> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _minimum; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _maximum; 
    }  _bounds;
    double  _boundsInWorldUnit;
    double  _boundsUnitsPerMeter;
    double  _builtViewUnitsPerPoint;
    bool  _hasNewRoadMatches;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _inverseMatrix;
    double  _lastTrafficTimeStamp;
    struct ManeuverArrowCoordinates { 
        struct vector<md::ManeuverArrowInfo, std::allocator<md::ManeuverArrowInfo>> { 
            struct ManeuverArrowInfo {} *__begin_; 
            struct ManeuverArrowInfo {} *__end_; 
            struct __compressed_pair<md::ManeuverArrowInfo *, std::allocator<md::ManeuverArrowInfo>> { 
                struct ManeuverArrowInfo {} *__value_; 
            } __end_cap_; 
        } _maneuverArrows; 
    }  _maneuverArrowCoordinates;
    bool  _matchToRoads;
    NSMutableArray * _matchedSegments;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _matchedSegmentsLock;
    unsigned int  _matchingEndIndex;
    unsigned int  _matchingStartIndex;
    double  _metersPerPoint;
    unsigned short  _numPathsMatching;
    <VKRouteLineObserverProtocol> * _observer;
    VKPolylineOverlay * _overlay;
    GEOPathMatcher * _pathMatcher;
    NSMutableArray * _pendingMatchedSegments;
    VKPolylineOverlayRenderRegion * _renderRegion;
    NSSet * _retainedMatchedSegment;
    struct _retain_ptr<NSUUID *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        NSUUID *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _revisionIdentifier;
    struct vector<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> *, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _sections;
    double  _simplificationEpsilonPoints;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _userLocation;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _userLocationIndex;
    struct fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> { 
        struct _fast_shared_ptr_control {} *_control; 
    }  _userLocationSection;
    double  _viewUnitsPerPoint;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  bounds; /* unknown property attribute:  1>=[3d]}} */
@property (nonatomic, readonly) double boundsInWorldUnit;
@property (nonatomic, readonly) GEOComposedRoute *composedRoute;
@property bool hasNewRoadMatches;
@property (nonatomic, readonly) NSArray *matchedSegments;
@property (nonatomic) unsigned int matchingEndIndex;
@property (nonatomic) unsigned int matchingStartIndex;
@property unsigned short numPathsMatching;
@property (nonatomic) <VKRouteLineObserverProtocol> *observer;
@property (nonatomic, readonly) VKPolylineOverlay *overlay;
@property (nonatomic, readonly) GEOPathMatcher *pathMatcher;
@property (nonatomic, readonly) VKPolylineOverlayRenderRegion *renderRegion;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<geo::fast_shared_ptr<md::RouteLineSection' */ struct  sections; /* unknown property attribute:  mdm::MDAllocator>>>=^v}} */
@property (nonatomic) double simplificationEpsilonPoints;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addMatchedSegments:(id)arg1;
- (void)_clearMatchedSegments;
- (void)_updateBounds:(id)arg1 boundsInflation:(float)arg2;
- (void)_updateTilesCovered:(id)arg1;
- (struct Box<double, 3> { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })bounds;
- (double)boundsInWorldUnit;
- (double)boundsUnitsPerMeter;
- (bool)buildRouteLine:(id)arg1 matchToRoads:(bool)arg2 shouldGenerateSnapPath:(bool)arg3 viewUnitsPerPoint:(double)arg4 force:(bool)arg5 boundsInflation:(float)arg6 isGradientTraffic:(bool)arg7 currentLegIndex:(unsigned int)arg8;
- (id)composedRoute;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)dealloc;
- (void)forEachSection:(id /* block */)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (bool)hasNewRoadMatches;
- (id)initWithPolylineOverlay:(id)arg1;
- (struct Matrix<double, 4, 4> { double x1[16]; })inverseManeuverTransform;
- (bool)isTrafficUpToDate;
- (bool)isTrafficUptoDate:(double)arg1;
- (struct vector<gm::Matrix<float, 2, 1>, std::allocator<gm::Matrix<float, 2, 1>>> { void *x1; void *x2; struct __compressed_pair<gm::Matrix<float, 2, 1> *, std::allocator<gm::Matrix<float, 2, 1>>> { void *x_3_1_1; } x3; })maneuverPoints;
- (struct Matrix<double, 4, 4> { double x1[16]; })maneuverTransform;
- (id)matchedSegments;
- (unsigned int)matchingEndIndex;
- (unsigned int)matchingStartIndex;
- (bool)needsUpdateForViewingScale:(double)arg1;
- (unsigned short)numPathsMatching;
- (id)observer;
- (id)overlay;
- (id)pathMatcher;
- (id)renderRegion;
- (struct vector<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> { void *x1; void *x2; struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> *, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> { void *x_3_1_1; } x3; })sections;
- (void)setHasNewRoadMatches:(bool)arg1;
- (void)setMatchingEndIndex:(unsigned int)arg1;
- (void)setMatchingStartIndex:(unsigned int)arg1;
- (void)setNumPathsMatching:(unsigned short)arg1;
- (void)setObserver:(id)arg1;
- (void)setSimplificationEpsilonPoints:(double)arg1;
- (double)simplificationEpsilonPoints;
- (struct optional<VKRouteLineSnapResult> { union { BOOL x_1_1_1; struct VKRouteLineSnapResult { struct Mercator3<double> { double x_1_3_1[3]; } x_2_2_1; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x_1_4_1[3]; } x_2_3_1; struct Mercator3<double> { double x_2_4_1[3]; } x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })snapRouteMatch:(id)arg1;
- (void)splitRouteLineAtAnnotation:(id)arg1;

@end
