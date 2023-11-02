
@interface _UIKBProductivityPinchGestureRecognizer : UIGestureRecognizer {
    NSMutableArray * _activeTouches;
    double  _allowableElapsedTimeForAllRequiredTouches;
    double  _avgTouchesToCentroidDistance;
    double  _beforeReductionTimeInterval;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginCentroid;
    double  _beginPerimeter;
    double  _beginPinchTimestamp;
    NSMutableDictionary * _beginTouchLocations;
    bool  _hasFailedOnOtherDominantMotion;
    bool  _multitouchTimerEnabled;
    unsigned long long  _numberOfTouchesRequired;
    long long  _pinchDirection;
    bool  _recognized;
    bool  _tooMuchSingleMovement;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    id  _transformAnalyzer;
}

@property (nonatomic, retain) NSMutableArray *activeTouches;
@property (nonatomic) double allowableElapsedTimeForAllRequiredTouches;
@property (nonatomic, readonly) double avgTouchesToCentroidDistance;
@property (nonatomic) double beforeReductionTimeInterval;
@property (nonatomic) struct CGPoint { double x1; double x2; } beginCentroid;
@property (nonatomic) double beginPerimeter;
@property (nonatomic) double beginPinchTimestamp;
@property (nonatomic, retain) NSMutableDictionary *beginTouchLocations;
@property (nonatomic, readonly) long long pinchDirection;
@property (nonatomic) bool tooMuchSingleMovement;

+ (id)productivityPinchGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3;

- (void).cxx_destruct;
- (void)_updateTransformAnalyzerWeights;
- (id)activeTouches;
- (double)allowableElapsedTimeForAllRequiredTouches;
- (double)avgDistanceToCentroid:(id)arg1;
- (double)avgTouchesToCentroidDistance;
- (double)beforeReductionTimeInterval;
- (struct CGPoint { double x1; double x2; })beginCentroid;
- (double)beginPerimeter;
- (double)beginPinchTimestamp;
- (id)beginTouchLocations;
- (struct CGPoint { double x1; double x2; })centroidOfTouches:(id)arg1;
- (void)clearMultitouchTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)multitouchExpired:(id)arg1;
- (double)perimeterOfTouches:(id)arg1;
- (long long)pinchDirection;
- (long long)pinchDirectionWithCurrentTime:(double)arg1 perimeter:(double)arg2;
- (void)reset;
- (double)scale;
- (void)setActiveTouches:(id)arg1;
- (void)setAllowableElapsedTimeForAllRequiredTouches:(double)arg1;
- (void)setBeforeReductionTimeInterval:(double)arg1;
- (void)setBeginCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBeginPerimeter:(double)arg1;
- (void)setBeginPinchTimestamp:(double)arg1;
- (void)setBeginTouchLocations:(id)arg1;
- (void)setTooMuchSingleMovement:(bool)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (bool)sufficientMotionInDirection:(long long)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2 withScale:(double)arg3 withAngle:(double)arg4;
- (bool)tooMuchSingleMovement;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
