
@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {
    NSMutableSet * _activeTouches;
    <_MKUserInteractionGestureRecognizerTouchObserver> * _touchObserver;
}

@property (nonatomic) <_MKUserInteractionGestureRecognizerTouchObserver> *touchObserver;

- (void).cxx_destruct;
- (void)setTouchObserver:(id)arg1;
- (id)touchObserver;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
