
@interface _MNLocationSimulationState : NSObject {
    _MNLocationSimulationData * _data;
    <_MNLocationSimulationStateDelegate> * _delegate;
}

@property (nonatomic, retain) _MNLocationSimulationData *data;
@property (nonatomic) <_MNLocationSimulationStateDelegate> *delegate;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (double)_courseFromCoordinate:(struct { double x1; double x2; double x3; })arg1 toCoordinate:(struct { double x1; double x2; double x3; })arg2;
- (id)_locationWithCoordinate:(struct { double x1; double x2; double x3; })arg1 course:(double)arg2 speed:(double)arg3;
- (struct { double x1; double x2; double x3; })_projectedCoordinateOffRouteFrom:(struct { double x1; double x2; double x3; })arg1 toCoordinate:(struct { double x1; double x2; double x3; })arg2 overTimeDelta:(double)arg3 outCourse:(out double*)arg4 outSpeed:(out double*)arg5;
- (id)data;
- (id)delegate;
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;
- (void)onEnterState;
- (void)onLeaveState;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (long long)type;
- (void)updateWithRouteInfo:(id)arg1;

@end
