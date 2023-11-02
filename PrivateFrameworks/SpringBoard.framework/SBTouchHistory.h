
@interface SBTouchHistory : NSObject <SBGestureRecognizerTouchHistoryProviding> {
    unsigned long long  _count;
    unsigned long long  _depth;
    struct TouchHistory { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } * _history;
    double  _lastTouchLatency;
    double  _peakSpeed;
    unsigned long long  _start;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (void)dealloc;
- (id)init;
- (id)initWithDepth:(unsigned long long)arg1;
- (double)peakSpeed;
- (void)reset;
- (int)touchHistoryDepthForTimeDuration:(double)arg1 forComputingDerivative:(bool)arg2;
- (void)updateWithLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2;
- (void)updateWithLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 touchLatency:(double)arg3;

@end
