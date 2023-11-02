
@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget, PKShapeDrawingControllerDelegate> {
    PKAlternativeStrokesAnimation * _alternativeStrokesAnimation;
    PKPaintAreaViewSurface * _currentPaintSurfaceObject;
    <PKPaintAreaViewDelegate> * _delegate;
    <MTLDevice> * _device;
    bool  _drawingDisabled;
    PKDrawingGestureRecognizer * _drawingGestureRecognizer;
    bool  _fingerDrawingEnabled;
    double  _liveAnimationStartTime;
    NSMutableArray * _liveSurfaces;
    PKShapeDrawingController * _shapeDrawingController;
    bool  _switchSurfacesDuringStrokes;
    PKTool * _tool;
}

@property (nonatomic, retain) PKAlternativeStrokesAnimation *alternativeStrokesAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaintAreaViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawingDisabled;
@property (nonatomic) bool fingerDrawingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double liveAnimationStartTime;
@property (nonatomic, retain) PKShapeDrawingController *shapeDrawingController;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (readonly) Class superclass;
@property (nonatomic) bool switchSurfacesDuringStrokes;
@property (nonatomic, retain) PKTool *tool;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_drawingBegan:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1 locationInView:(struct CGPoint { double x1; double x2; })arg2 inputType:(long long)arg3;
- (id)_drawingController;
- (void)_endAlternativeStrokeIfNecessaryAccepted:(bool)arg1;
- (bool)_isLiveAnimating;
- (id)_rendererController;
- (id)alternativeStrokesAnimation;
- (struct CGPoint { double x1; double x2; })applyTransformToTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })applyTransformToTouchLocation:(struct CGPoint { double x1; double x2; })arg1 previousPoint:(struct CGPoint { double x1; double x2; })arg2 newSurface:(id*)arg3;
- (bool)beginDrawingAtPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1 surface:(id)arg2 locationInView:(struct CGPoint { double x1; double x2; })arg3 inputType:(long long)arg4;
- (bool)canAddStroke;
- (bool)canBecomeFirstResponder;
- (void)checkAnimationsDidEndAtTime:(double)arg1;
- (id)delegate;
- (void)drawingBegan:(id)arg1;
- (void)drawingCancelled;
- (bool)drawingDisabled;
- (void)drawingEnded;
- (void)drawingEnded:(id)arg1;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (bool)drawingGestureRecognizer:(id)arg1 shouldBeginDrawingWithTouches:(id)arg2 event:(id)arg3;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)drawingMovedToPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1 locationInView:(struct CGPoint { double x1; double x2; })arg2;
- (bool)fingerDrawingEnabled;
- (id)hitSurface:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)liveAnimationStartTime;
- (void)setAlternativeStrokesAnimation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingDisabled:(bool)arg1;
- (void)setFingerDrawingEnabled:(bool)arg1;
- (void)setLiveAnimationStartTime:(double)arg1;
- (void)setShapeDrawingController:(id)arg1;
- (void)setSwitchSurfacesDuringStrokes:(bool)arg1;
- (void)setTool:(id)arg1;
- (id)shapeDrawingController;
- (id)shapeDrawingControllerRendererController:(id)arg1;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)arg1;
- (void)shapeDrawingControllerShapeGestureDetected:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (bool)switchSurfacesDuringStrokes;
- (void)switchToNewPaintSurface:(id)arg1;
- (id)tool;
- (void)vsync:(double)arg1;

@end
