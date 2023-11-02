
@interface PKTextInputTouchDetectionGestureRecognizer : UIGestureRecognizer {
    NSMapTable * __touches;
}

@property (nonatomic, retain) NSMapTable *_touches;
@property (nonatomic) <PKTextInputTouchDetectionGestureRecognizerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_touches;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)init;
- (void)recognizeTouch;
- (void)recognizeTouch:(id)arg1 afterThreshold:(double)arg2;
- (void)reset;
- (void)set_touches:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
