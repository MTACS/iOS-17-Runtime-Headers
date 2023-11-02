
@interface CLRacingRouteParameters : NSObject <NSCopying, NSSecureCoding> {
    CLRacingRouteState * _lastOnRouteDataPoint;
    CLRacingRouteState * _lastProjectedDataPoint;
    CLRacingRouteVariables * _racingRouteVariables;
    CLRouteBoundingBox * _routeBoundingBox;
    NSArray * _routeMatrixIndexVec;
    CLRacingRouteState * _startPointOnCurrentRoute;
    CLRacingRouteState * _startPointOnReferenceRoute;
}

@property (nonatomic, readonly, copy) CLRacingRouteState *lastOnRouteDataPoint;
@property (nonatomic, readonly, copy) CLRacingRouteState *lastProjectedDataPoint;
@property (nonatomic, readonly, copy) CLRacingRouteVariables *racingRouteVariables;
@property (nonatomic, readonly, copy) CLRouteBoundingBox *routeBoundingBox;
@property (nonatomic, readonly, copy) NSArray *routeMatrixIndexVec;
@property (nonatomic, readonly, copy) CLRacingRouteState *startPointOnCurrentRoute;
@property (nonatomic, readonly, copy) CLRacingRouteState *startPointOnReferenceRoute;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRouteMatrixIndexVec:(id)arg1 racingRouteVariables:(id)arg2 startPointOnCurrentRoute:(id)arg3 startPointOnReferenceRoute:(id)arg4 lastOnRouteDataPoint:(id)arg5 lastProjectedDataPoint:(id)arg6 routeBoundingBox:(id)arg7;
- (id)lastOnRouteDataPoint;
- (id)lastProjectedDataPoint;
- (id)racingRouteVariables;
- (id)routeBoundingBox;
- (id)routeMatrixIndexVec;
- (id)startPointOnCurrentRoute;
- (id)startPointOnReferenceRoute;

@end
