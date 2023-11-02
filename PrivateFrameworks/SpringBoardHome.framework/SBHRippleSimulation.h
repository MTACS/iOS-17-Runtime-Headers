
@interface SBHRippleSimulation : NSObject {
    double * _positionBuffer;
    unsigned long long  _rippleHeight;
    unsigned long long  _rippleResolution;
    unsigned long long  _rippleStyle;
    double  _rippleTimeStep;
    double  _rippleTouchHeight;
    double  _rippleTouchRadius;
    unsigned long long  _rippleWidth;
    bool  _settled;
    double * _velocityBuffer;
}

@property (getter=isSettled, nonatomic) bool settled;

- (void)clear;
- (struct CGPoint { double x1; double x2; })convertGridToRippleCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (void)createRippleAtGridCoordinate:(struct CGPoint { double x1; double x2; })arg1 strength:(double)arg2;
- (void)dealloc;
- (id)initWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 resolution:(unsigned long long)arg3 style:(unsigned long long)arg4;
- (bool)isSettled;
- (void)setSettled:(bool)arg1;
- (void)step:(double)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformForGridCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (double)zPositionForGridCoordinate:(struct CGPoint { double x1; double x2; })arg1;

@end
