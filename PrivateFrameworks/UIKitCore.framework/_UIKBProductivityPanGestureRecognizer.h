
@interface _UIKBProductivityPanGestureRecognizer : UIPanGestureRecognizer {
    NSMutableSet * _activeTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginPanCentroid;
    double  _beginPanTimestamp;
    NSMutableDictionary * _beginTouchLocations;
    NSMutableSet * _shiftTouches;
    bool  _tooMuchSingleMovement;
    _UIGestureRecognizerTransformAnalyzer * _transformAnalyzer;
}

@property (nonatomic, retain) NSMutableSet *activeTouches;
@property (nonatomic) struct CGPoint { double x1; double x2; } beginPanCentroid;
@property (nonatomic) double beginPanTimestamp;
@property (nonatomic, retain) NSMutableDictionary *beginTouchLocations;
@property (nonatomic, retain) NSMutableSet *shiftTouches;
@property (nonatomic) bool tooMuchSingleMovement;
@property (nonatomic, retain) _UIGestureRecognizerTransformAnalyzer *transformAnalyzer;

+ (id)productivityPanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3;

- (void).cxx_destruct;
- (id)activeTouches;
- (struct CGPoint { double x1; double x2; })beginPanCentroid;
- (double)beginPanTimestamp;
- (id)beginTouchLocations;
- (struct CGPoint { double x1; double x2; })centroidOfTouches:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isShiftOrMoreKeyForTouch:(id)arg1;
- (void)reset;
- (void)setActiveTouches:(id)arg1;
- (void)setBeginPanCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBeginPanTimestamp:(double)arg1;
- (void)setBeginTouchLocations:(id)arg1;
- (void)setShiftTouches:(id)arg1;
- (void)setTooMuchSingleMovement:(bool)arg1;
- (void)setTransformAnalyzer:(id)arg1;
- (id)shiftTouches;
- (bool)tooMuchSingleMovement;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)transformAnalyzer;

@end
