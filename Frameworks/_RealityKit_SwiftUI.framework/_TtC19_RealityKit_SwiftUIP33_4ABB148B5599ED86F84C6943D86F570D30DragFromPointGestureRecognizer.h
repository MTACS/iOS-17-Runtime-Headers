
@interface _TtC19_RealityKit_SwiftUIP33_4ABB148B5599ED86F84C6943D86F570D30DragFromPointGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {
    void manipulator;
    void onPan;
    void startPoint;
}

- (void).cxx_destruct;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)onPanInternal:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
