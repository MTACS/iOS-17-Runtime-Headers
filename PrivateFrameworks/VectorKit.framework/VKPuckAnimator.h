
@interface VKPuckAnimator : NSObject {
    VKTimedAnimation * _animation;
    unsigned long long  _behavior;
    VKRunningCurve * _curve;
    <VKPuckAnimatorDelegate> * _delegate;
    bool  _hasElevation;
    struct optional<md::LocationUpdate> { 
        union { 
            BOOL __null_state_; 
            struct LocationUpdate { 
                CLLocation *location; 
                GEORouteMatch *routeMatch; 
                NSUUID *locationUpdateUUID; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _lastLocationUpdate;
    struct { 
        double latitude; 
        double longitude; 
    }  _lastProjectedCoordinate;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _lastProjectedPosition;
    VKPuckAnimatorLocationProjector * _locationProjector;
    struct linear_map<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>, std::equal_to<unsigned long long>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>, std::vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>>="_backing"{vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>> *, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>>="__value_"^v {}  _locationUpdateSubscriptions;
    long long  _pausedCount;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        double _value; 
        id _listener; 
        struct function<void (double)>="__f_"{__value_func<void (double)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _puckUpdateDistanceDeltaThreshold;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        double _value; 
        id _listener; 
        struct function<void (double)>="__f_"{__value_func<void (double)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _puckUpdatePointDeltaForAnimation;
    bool  _resetCourse;
    const struct RouteOverlayCache { int (**x1)(); id x2; } * _routeOverlayCache;
    bool  _suspended;
    <VKPuckAnimatorTarget> * _target;
    double  _tracePlaybackSpeedMultiplier;
    double  _vehicleHeading;
}

@property (nonatomic) bool alwaysUseGoodRouteMatch;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{optional<std::pair<geo::Mercator3<double>' */ struct  currentSnappedSegment; /* unknown property attribute:  geo::Mercator3<double>>={Mercator3<double>=[3d]}{Mercator3<double>=[3d]}})B} */
@property (nonatomic) <VKPuckAnimatorDelegate> *delegate;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  lastProjectedPosition; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, retain) <VKPuckAnimatorTarget> *target;
@property (nonatomic) double tracePlaybackSpeedMultiplier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_publishLocationUpdate:(id)arg1 routeMatch:(id)arg2 uuid:(id)arg3;
- (void)_queueLocationUpdate:(id)arg1 routeMatch:(id)arg2 locationUpdateUUID:(id)arg3;
- (void)_step;
- (void)_updateLocation:(id)arg1 routeMatch:(id)arg2 locationUpdateUUID:(id)arg3;
- (bool)alwaysUseGoodRouteMatch;
- (unsigned long long)behavior;
- (struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { BOOL x_1_1_1; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x_1_3_1[3]; } x_2_2_1; struct Mercator3<double> { double x_2_3_1[3]; } x_2_2_2; } x_1_1_2; } x1; bool x2; })currentSnappedSegment;
- (void)dealloc;
- (id)delegate;
- (id)detailedDescription;
- (bool)hasElevation;
- (id)initWithCallbackQueue:(id)arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })lastProjectedPosition;
- (void)pause;
- (void)processLocationUpdates;
- (void)resetCourse;
- (void)resume;
- (void)setAlwaysUseGoodRouteMatch:(bool)arg1;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastProjectedPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1;
- (void)setRouteOverlayCache:(const struct RouteOverlayCache { int (**x1)(); id x2; }*)arg1;
- (void)setTarget:(id)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)start;
- (void)stop;
- (unsigned long long)subscribeToLocationUpdates:(struct function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>={__value_func<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>={type=[24C] {})arg1;
- (id)target;
- (double)tracePlaybackSpeedMultiplier;
- (void)unsubscribeFromLocationUpdates:(unsigned long long)arg1;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2 locationUpdateUUID:(id)arg3;
- (void)updateVehicleHeading:(double)arg1;
- (void)updatedPosition:(const void*)arg1;

@end
