
@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer {
    <_UIFocusEnginePanGestureTouchObserver> * _touchObserver;
}

@property (nonatomic) <_UIFocusEnginePanGestureRecognizerDelegate> *delegate;
@property (nonatomic) <_UIFocusEnginePanGestureTouchObserver> *touchObserver;

- (void).cxx_destruct;
- (void)setTouchObserver:(id)arg1;
- (id)touchObserver;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
