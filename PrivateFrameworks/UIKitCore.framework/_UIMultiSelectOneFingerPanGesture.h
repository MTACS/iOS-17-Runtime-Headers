
@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer {
    UIEvent * _activeEvent;
    UITouch * _activeTouch;
    <_UIMultiSelectOneFingerPanGestureDelegate> * _oneFingerPanDelegate;
}

@property (nonatomic, readonly) UIEvent *activeEvent;
@property (nonatomic, readonly) UITouch *activeTouch;
@property (nonatomic) <_UIMultiSelectOneFingerPanGestureDelegate> *oneFingerPanDelegate;

- (void).cxx_destruct;
- (bool)_affectedByGesture:(id)arg1;
- (bool)_preventsDragInteractionGestures;
- (id)activeEvent;
- (id)activeTouch;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)oneFingerPanDelegate;
- (void)reset;
- (void)setOneFingerPanDelegate:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
