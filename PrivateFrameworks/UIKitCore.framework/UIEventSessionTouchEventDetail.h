
@interface UIEventSessionTouchEventDetail : NSObject {
    double  _dragDistanceSquared;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLocation;
    long long  _tapDragState;
    long long  _upDownState;
    long long  _windowSection;
}

@property (nonatomic) double dragDistanceSquared;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastLocation;
@property (nonatomic) long long tapDragState;
@property (nonatomic) long long upDownState;
@property (nonatomic) long long windowSection;

- (double)dragDistanceSquared;
- (id)init;
- (struct CGPoint { double x1; double x2; })lastLocation;
- (void)setDragDistanceSquared:(double)arg1;
- (void)setLastLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTapDragState:(long long)arg1;
- (void)setUpDownState:(long long)arg1;
- (void)setWindowSection:(long long)arg1;
- (long long)tapDragState;
- (long long)upDownState;
- (long long)windowSection;

@end
