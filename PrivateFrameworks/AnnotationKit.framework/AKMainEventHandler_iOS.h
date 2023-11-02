
@interface AKMainEventHandler_iOS : AKMainEventHandler <PKSelectionInteractionDelegate, UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * _doubleTapRecognizer;
    double  _lastRotationAngleInRotationGesture;
    AKPanGestureRecognizer * _panRecognizer;
    UILongPressGestureRecognizer * _pressRecognizer;
    AKRotationGestureRecognizer * _rotationRecognizer;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UITapGestureRecognizer *doubleTapRecognizer;
@property (readonly) unsigned long long hash;
@property double lastRotationAngleInRotationGesture;
@property (retain) AKPanGestureRecognizer *panRecognizer;
@property (retain) UILongPressGestureRecognizer *pressRecognizer;
@property (retain) AKRotationGestureRecognizer *rotationRecognizer;
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (bool)_doubleTapRecognizerCanBeginAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_shouldAllowTapAtLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_tapRecognizerCanBeginAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (id)doubleTapRecognizer;
- (void)forwardRecognizerToMainHandleEvent:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithController:(id)arg1;
- (double)lastRotationAngleInRotationGesture;
- (id)panRecognizer;
- (id)pressRecognizer;
- (id)rotationRecognizer;
- (bool)selectionInteractionShouldBegin:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(id)arg3 orGestureRecognizer:(id)arg4;
- (void)setDoubleTapRecognizer:(id)arg1;
- (void)setLastRotationAngleInRotationGesture:(double)arg1;
- (void)setPanRecognizer:(id)arg1;
- (void)setPressRecognizer:(id)arg1;
- (void)setRotationRecognizer:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)tapRecognizer;
- (void)teardown;

@end
