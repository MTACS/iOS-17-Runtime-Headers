
@interface VKPuckAnimatorLocationProjector : NSObject {
    bool  _alwaysUseGoodRouteMatch;
    struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { 
        union { 
            BOOL __null_state_; 
            struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { 
                struct Mercator3<double> { 
                    double _e[3]; 
                } first; 
                struct Mercator3<double> { 
                    double _e[3]; 
                } second; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _currentSnappedSegment;
    struct optional<double> { 
        union { 
            BOOL __null_state_; 
            double __val_; 
        } ; 
        bool __engaged_; 
    }  _elevationInProjectedPosition;
    bool  _isProjectedPositionBehind;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _maxTravelledCoordinate;
    double  _projectedCourse;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _projectedPosition;
    GEORouteMatch * _projectedRouteMatch;
    GEORouteMatch * _routeMatch;
}

@property (nonatomic) bool alwaysUseGoodRouteMatch;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{optional<std::pair<geo::Mercator3<double>' */ struct  currentSnappedSegment; /* unknown property attribute:  geo::Mercator3<double>>={Mercator3<double>=[3d]}{Mercator3<double>=[3d]}})B} */
@property (nonatomic, readonly) struct optional<double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; } elevationInProjectedPostion;
@property (nonatomic, readonly) bool isProjectedPositionBehind;
@property (nonatomic, readonly) double projectedCourse;
@property (nonatomic, readonly) struct { double x1; double x2; } projectedLocation;
@property (nonatomic, readonly) bool projectedLocationOnRoute;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  projectedPosition; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, retain) GEORouteMatch *projectedRouteMatch;
@property (nonatomic, retain) GEORouteMatch *routeMatch;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateCourseAndPositionFromRouteMatch:(id)arg1;
- (bool)alwaysUseGoodRouteMatch;
- (struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { BOOL x_1_1_1; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x_1_3_1[3]; } x_2_2_1; struct Mercator3<double> { double x_2_3_1[3]; } x_2_2_2; } x_1_1_2; } x1; bool x2; })currentSnappedSegment;
- (void)dealloc;
- (id)detailedDescription;
- (struct optional<double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; })elevationInProjectedPostion;
- (id)init;
- (bool)isProjectedPositionBehind;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3 routeLine:(id)arg4;
- (double)projectedCourse;
- (struct { double x1; double x2; })projectedLocation;
- (bool)projectedLocationOnRoute;
- (struct Matrix<double, 3, 1> { double x1[3]; })projectedPosition;
- (id)projectedRouteMatch;
- (void)reset;
- (id)routeMatch;
- (void)setAlwaysUseGoodRouteMatch:(bool)arg1;
- (void)setProjectedRouteMatch:(id)arg1;
- (void)setRouteMatch:(id)arg1;

@end
