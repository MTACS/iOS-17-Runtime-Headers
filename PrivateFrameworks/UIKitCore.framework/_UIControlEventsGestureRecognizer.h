
@interface _UIControlEventsGestureRecognizer : UIGestureRecognizer {
    UITouch * _activeTouch;
    <_UIControlEventsGestureRecognizerDelegate> * _controlEventsDelegate;
    struct { 
        unsigned int touchInside : 1; 
        unsigned int touchDragged : 1; 
        unsigned int deliveredCancel : 1; 
    }  _flags;
}

@property (nonatomic, readonly) UITouch *activeTouch;
@property (nonatomic) <_UIControlEventsGestureRecognizerDelegate> *controlEventsDelegate;

- (void).cxx_destruct;
- (id)activeTouch;
- (id)controlEventsDelegate;
- (void)gestureRecognizerFailed;
- (void)reset;
- (void)sendControlEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)setControlEventsDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
