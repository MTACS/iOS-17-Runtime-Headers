
@interface VKRouteContext : NSObject <MKMapViewRouteContextUpdates> {
    NSString * _accessPointEntryName;
    NSString * _accessPointExitName;
    NSHashTable * _alternateRouteLineObservers;
    NSArray * _alternateRoutes;
    long long  _currentSegmentIndex;
    long long  _currentStepIndex;
    GEOComposedWaypoint * _currentWaypoint;
    unsigned char  _currentWaypointProximity;
    bool  _hasContextChangedForAlternateRouteLines;
    bool  _hasContextChangedForLabels;
    bool  _hasContextChangedForRouteLine;
    long long  _inspectedSegmentIndex;
    long long  _inspectedStepIndex;
    NSHashTable * _labelObservers;
    NSString * _locale;
    struct { 
        double latitude; 
        double longitude; 
    }  _puckLocation;
    float  _puckRadius;
    unsigned long long  _puckSnappedStopID;
    VKRouteInfo * _routeInfo;
    NSHashTable * _routeLineObservers;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    struct multimap<unsigned int, std::vector<RouteSection>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<RouteSection>>>> { 
        struct __tree<std::__value_type<unsigned int, std::vector<RouteSection>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, std::vector<RouteSection>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::vector<RouteSection>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _shareSections;
    bool  _snappingToTransitLines;
    unsigned char  _useType;
}

@property (nonatomic, retain) NSString *accessPointEntryName;
@property (nonatomic, retain) NSString *accessPointExitName;
@property (nonatomic, retain) NSArray *alternateRoutes;
@property (nonatomic) long long currentSegmentIndex;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic, readonly) GEOComposedWaypoint *currentWaypoint;
@property (nonatomic, readonly) unsigned char currentWaypointProximity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inspectedSegmentIndex;
@property (nonatomic) long long inspectedStepIndex;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) struct { double x1; double x2; } puckLocation;
@property (nonatomic) float puckRadius;
@property (nonatomic) unsigned long long puckSnappedStopID;
@property (nonatomic, readonly) VKRouteInfo *routeInfo;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic) bool snappingToTransitLines;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalRouteCount;
@property (nonatomic, readonly) unsigned char useType;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_hashTableForObserverType:(unsigned char)arg1;
- (void)_setHasContextChangedForObserverType:(unsigned char)arg1 withValue:(bool)arg2;
- (id)accessPointEntryName;
- (id)accessPointExitName;
- (void)addObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)addShareSections:(const struct { id x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct PolylineCoordinate { unsigned int x_3_1_1; float x_3_1_2; } x3; }*)arg1 shareCount:(unsigned int)arg2;
- (id)alternateRoutes;
- (long long)currentSegmentIndex;
- (long long)currentStepIndex;
- (id)currentWaypoint;
- (unsigned char)currentWaypointProximity;
- (id)description;
- (void)forEachRouteInfo:(id /* block */)arg1;
- (void)forEachSectionWithShareCount:(unsigned int)arg1 dothis:(id /* block */)arg2;
- (id)initWithComposedRoute:(id)arg1 useType:(unsigned char)arg2;
- (id)initWithRouteInfo:(id)arg1 useType:(unsigned char)arg2;
- (long long)inspectedSegmentIndex;
- (long long)inspectedStepIndex;
- (id)locale;
- (struct { double x1; double x2; })puckLocation;
- (float)puckRadius;
- (unsigned long long)puckSnappedStopID;
- (void)removeObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)resetNotificationsForObserverType:(unsigned char)arg1;
- (id)routeInfo;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setAccessPointEntryName:(id)arg1;
- (void)setAccessPointExitName:(id)arg1;
- (void)setAlternateRoutes:(id)arg1;
- (void)setCurrentSegmentIndex:(long long)arg1;
- (void)setCurrentStepIndex:(long long)arg1;
- (void)setCurrentWaypoint:(id)arg1 withProximity:(unsigned char)arg2;
- (void)setInspectedSegmentIndex:(long long)arg1;
- (void)setInspectedStepIndex:(long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setPuckLocation:(struct { double x1; double x2; })arg1;
- (void)setPuckRadius:(float)arg1;
- (void)setPuckSnappedStopID:(unsigned long long)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSnappingToTransitLines:(bool)arg1;
- (bool)snappingToTransitLines;
- (unsigned long long)totalRouteCount;
- (unsigned char)useType;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_routeInfoForRoute:(id)arg1;
- (void)_setAlternateRouteContextAnnotationETAComparison:(unsigned char)arg1 forRoute:(id)arg2;
- (void)_setRouteContextAnnotationFocus:(bool)arg1 forRoute:(id)arg2;
- (void)_setRouteContextAnnotationText:(id)arg1 advisoryStyleAttributes:(id)arg2 forRoute:(id)arg3;
- (void)_setRouteContextAnnotationText:(id)arg1 etaType:(long long)arg2 tollCurrency:(unsigned char)arg3 advisoryStyleAttributes:(id)arg4 forRoute:(id)arg5;
- (void)_setRouteContextAnnotationText:(id)arg1 tollCurrency:(unsigned char)arg2 forRoute:(id)arg3;
- (void)_setRouteContextAnnotationTexts:(id)arg1 forLegsInRoute:(id)arg2;
- (void)_setRouteContextInspectedSegmentIndex:(unsigned long long)arg1 inspectedStepIndex:(unsigned long long)arg2;
- (void)_updateWaypointCaptions;

@end
