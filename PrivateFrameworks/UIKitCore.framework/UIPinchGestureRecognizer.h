
@interface UIPinchGestureRecognizer : UIGestureRecognizer {
    bool  __enableNestedHysteresis;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorSceneReferencePoint;
    unsigned int  _endsOnSingleTouch;
    double  _hysteresis;
    double  _initialScale;
    double  _initialTouchDistance;
    double  _lastEventTime;
    double  _lastNonZeroTimestampDelta;
    unsigned int  _loggedPinchStatistic;
    unsigned int  _loggedZoomStatistic;
    double  _previousVelocity;
    double  _scaleThreshold;
    UITouch * _touches;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    _UIGestureRecognizerTransformAnalyzer * _transformAnalyzer;
    double  _velocity;
}

@property (nonatomic) bool _enableNestedHysteresis;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (getter=_hysteresis, setter=_setHysteresis:, nonatomic) double hysteresis;
@property (nonatomic) double scale;
@property (nonatomic) double scaleThreshold;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) double velocity;

+ (bool)_shouldDefaultToTouches;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyScale:(double)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 touchDistance:(double)arg3 withEvent:(id)arg4;
- (void)_cancelOrFail;
- (bool)_enableNestedHysteresis;
- (void)_endOrFail;
- (bool)_endsOnSingleTouch;
- (double)_hysteresis;
- (double)_hysteresisForTouches:(id)arg1;
- (void)_logStatisticsForScale:(double)arg1;
- (void)_resetGestureRecognizer;
- (void)_setEndsOnSingleTouch:(bool)arg1;
- (void)_setHysteresis:(double)arg1;
- (void)_transformChangedWithEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)scale;
- (double)scaleThreshold;
- (void)setScale:(double)arg1;
- (void)setScaleThreshold:(double)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)set_enableNestedHysteresis:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (double)velocity;

@end
