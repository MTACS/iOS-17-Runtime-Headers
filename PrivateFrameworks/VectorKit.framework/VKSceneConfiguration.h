
@interface VKSceneConfiguration : NSObject {
    unsigned char  _cameraMode;
    unsigned long long  _currentGroupedManeuverCount;
    unsigned char  _currentIncidentType;
    unsigned char  _currentManeuverComplexity;
    int  _currentManeuverType;
    unsigned char  _currentStepLength;
    unsigned char  _currentTrafficState;
    unsigned char  _currentTransitManeuver;
    struct DistancesRange { 
        double _immediate; 
        double _extremlyNear; 
        double _veryNear; 
        double _near; 
        double _medium; 
        double _far; 
        double _veryFar; 
    }  _distanceRanges;
    unsigned char  _distanceToCurrentManeuver;
    unsigned char  _distanceToCurrentTrafficSection;
    double  _distanceToDestination;
    unsigned int  _laneCount;
    unsigned int  _lineType;
    unsigned char  _navState;
    unsigned char  _navigationDestination;
    int  _nextManeuverRampType;
    unsigned int  _nextRoadComplexity;
    unsigned char  _nextStepLength;
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOLocationCoordinate2D *, std::allocator<GEOLocationCoordinate2D>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _pointsOfInterest;
    int  _rampType;
    unsigned int  _roadComplexity;
    unsigned char  _roadSpeed;
    unsigned long long  _roadSpeedZeroes;
    unsigned char  _routeSinuosity;
    struct shared_ptr<gss::ClientStyleState<gss::ScenePropertyID>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sceneClientStyleState;
    unsigned char  _searchAlongTheRoute;
    struct SinuosityLevels { 
        double _straight; 
        double _low; 
        double _medium; 
        double _high; 
    }  _sinuosityLevels;
    struct unordered_map<gss::StyleAttribute, GEOPolylineCoordinateRange, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, std::allocator<std::pair<const gss::StyleAttribute, GEOPolylineCoordinateRange>>> { 
        struct __hash_table<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>>, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>>, std::allocator<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _styleAttributeCoordinateRanges;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    unsigned char  _transportType;
    unsigned char  _vehicleSpeed;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateStyleManager;
- (void)applyStyleAttributeKeyValue:(unsigned int)arg1 withValue:(unsigned int)arg2 withCoordinateRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)initWithTaskContext:(const void*)arg1;
- (unsigned long long)navCameraMode;
- (unsigned char)navCameraModeStyleAttribute;
- (unsigned long long)navigationDestination;
- (unsigned char)navigationState;
- (void)removeStyleAttributeKey:(unsigned int)arg1;
- (void)resetState;
- (struct shared_ptr<gss::ClientStyleState<gss::ScenePropertyID>> { void *x1; struct __shared_weak_count {} *x2; })sceneClientStyleState;
- (void)setCurrentGroupedManeuverCount:(unsigned long long)arg1;
- (void)setCurrentIncidentType:(unsigned long long)arg1;
- (void)setCurrentManeuverJunctionsCount:(unsigned long long)arg1;
- (void)setCurrentManeuverType:(int)arg1;
- (void)setCurrentRoadComplexity:(unsigned int)arg1;
- (void)setCurrentStepLength:(double)arg1;
- (void)setCurrentTransitManeuverType:(int)arg1;
- (void)setCurrentTransportationType:(int)arg1;
- (void)setDistanceToCurrentManeuver:(double)arg1;
- (void)setDistanceToCurrentTrafficSection:(double)arg1;
- (void)setDistanceToDestination:(double)arg1;
- (void)setLaneCount:(unsigned int)arg1;
- (void)setLineType:(unsigned int)arg1;
- (void)setNavCameraMode:(unsigned long long)arg1;
- (void)setNavigationDestination:(unsigned long long)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNextManeuverRampType:(int)arg1;
- (void)setNextRoadComplexity:(unsigned int)arg1;
- (void)setNextStepLength:(double)arg1;
- (void)setRampType:(int)arg1;
- (void)setRoadSpeed:(double)arg1;
- (void)setSceneClientStyleState:(struct shared_ptr<gss::ClientStyleState<gss::ScenePropertyID>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setSearchAlongTheRoute:(bool)arg1;
- (void)setSinuosity:(double)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTrafficColor:(unsigned long long)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (const void*)styleAttributeCoordinateRanges;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x1; struct __shared_weak_count {} *x2; })styleManager;

@end
