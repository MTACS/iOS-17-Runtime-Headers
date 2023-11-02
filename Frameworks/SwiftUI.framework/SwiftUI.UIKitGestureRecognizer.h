
@interface SwiftUI.UIKitGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable, _UITransformEventRespondable> {
    void eventBridge;
    void initialAngle;
    void initialScale;
    void scrollConverter;
}

- (void).cxx_destruct;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (void)_transformChangedWithEvent:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
