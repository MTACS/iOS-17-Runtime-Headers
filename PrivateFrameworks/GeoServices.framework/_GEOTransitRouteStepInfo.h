
@interface _GEOTransitRouteStepInfo : NSObject {
    unsigned int  _duration;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _maneuverPointRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pointRange;
    long long  _routeSegmentType;
    GEOTransitStep * _transitStep;
    GEOStep * _walkingStep;
}

@property (nonatomic, readonly) double distance;
@property (nonatomic) unsigned int duration;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } maneuverPointRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } pointRange;
@property (nonatomic) long long routeSegmentType;
@property (nonatomic, retain) GEOTransitStep *transitStep;
@property (nonatomic, retain) GEOStep *walkingStep;

- (void).cxx_destruct;
- (double)distance;
- (unsigned int)duration;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maneuverPointRange;
- (unsigned long long)numPoints;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pointRange;
- (long long)routeSegmentType;
- (void)setDuration:(unsigned int)arg1;
- (void)setManeuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRouteSegmentType:(long long)arg1;
- (void)setTransitStep:(id)arg1;
- (void)setWalkingStep:(id)arg1;
- (id)transitStep;
- (id)walkingStep;

@end
