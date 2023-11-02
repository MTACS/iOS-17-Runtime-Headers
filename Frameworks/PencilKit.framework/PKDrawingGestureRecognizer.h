
@interface PKDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol> {
    unsigned long long  _activeInputProperties;
    struct CGPoint { 
        double x; 
        double y; 
    }  _drawTouchStartPoint;
    bool  _drawingTargetIsDrawing;
    UITouch * _drawingTouch;
    bool  _gestureDetected;
    bool  _ignoreFingerTouchesUntilReset;
    double  _squaredThreshold;
    double  _thresholdDistance;
    <PKDrawingGestureTarget> * drawingTarget;
}

@property (nonatomic, readonly) unsigned long long activeInputProperties;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDrawingGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKDrawingGestureTarget> *drawingTarget;
@property (nonatomic, retain) UITouch *drawingTouch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReplaying;
@property (readonly) Class superclass;
@property (nonatomic) double thresholdDistance;

+ (unsigned long long)activeInputPropertiesForTouch:(id)arg1 event:(id)arg2;

- (void).cxx_destruct;
- (void)_beginDrawingWithTouch:(id)arg1;
- (void)_cancelDrawing;
- (void)_drawingBegan;
- (void)_drawingCancelled;
- (void)_drawingEnded;
- (void)_drawingMoved:(id)arg1;
- (void)_endDrawing;
- (bool)_shouldBeginDrawing:(id)arg1 withEvent:(id)arg2;
- (void)_updateDrawingWithEvent:(id)arg1;
- (unsigned long long)activeInputProperties;
- (void)cancel;
- (id)drawingTarget;
- (id)drawingTouch;
- (void)end;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isReplaying;
- (void)reset;
- (void)setDrawingTarget:(id)arg1;
- (void)setDrawingTouch:(id)arg1;
- (void)setThresholdDistance:(double)arg1;
- (double)thresholdDistance;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
