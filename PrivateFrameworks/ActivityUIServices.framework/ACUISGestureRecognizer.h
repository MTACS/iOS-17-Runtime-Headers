
@interface ACUISGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    NSSet * _observedControlClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *observedControlClasses;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldRecognizeTouchForView:(id)arg1;
- (bool)_shouldRecognizeTouches:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)observedControlClasses;
- (void)setObservedControlClasses:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
