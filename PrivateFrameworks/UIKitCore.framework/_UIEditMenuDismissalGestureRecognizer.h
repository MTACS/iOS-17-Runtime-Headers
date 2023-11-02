
@interface _UIEditMenuDismissalGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {
    <_UIEditMenuDismissalGestureRecognizerDelegate> * _interactionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_UIEditMenuDismissalGestureRecognizerDelegate> *interactionDelegate;
@property (readonly) Class superclass;

+ (bool)_supportsTouchContinuation;
+ (bool)canHandleEventForPassthrough:(id)arg1;

- (void).cxx_destruct;
- (bool)_affectedByGesture:(id)arg1;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)_transformChangedWithEvent:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)interactionDelegate;
- (void)setInteractionDelegate:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
