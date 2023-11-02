
@interface SBUIPresentableCancelSystemDragGestureRecognizer : UIGestureRecognizer {
    <SBUIPresentableCancelSystemDragGestureRecognizerDelegate> * _delegate;
}

@property (nonatomic) <SBUIPresentableCancelSystemDragGestureRecognizerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)delegate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
