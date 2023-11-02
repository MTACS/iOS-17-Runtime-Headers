
@interface _RealityKit_SwiftUI.DragGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {
    void draggable;
    void startPoint;
}

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)onPanInternal:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
