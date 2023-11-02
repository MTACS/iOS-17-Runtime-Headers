
@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer {
    SEL  _gestureFailedAction;
    id  _gestureFailedTarget;
    SEL  _gestureIdentifiedAction;
    id  _gestureIdentifiedTarget;
    struct RetainPtr<NSNumber> { 
        void *m_ptr; 
    }  _lastActiveTouchIdentifier;
    UIScrollView * _lastTouchedScrollView;
    SEL  _resetAction;
    id  _resetTarget;
    UIWebTouchEventsGestureRecognizer * _supportingWebTouchEventsGestureRecognizer;
}

@property (nonatomic, readonly) NSNumber *lastActiveTouchIdentifier;
@property (nonatomic, readonly) UIScrollView *lastTouchedScrollView;
@property (nonatomic) UIWebTouchEventsGestureRecognizer *supportingWebTouchEventsGestureRecognizer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lastActiveTouchIdentifier;
- (id)lastTouchedScrollView;
- (void)reset;
- (void)setGestureFailedTarget:(id)arg1 action:(SEL)arg2;
- (void)setGestureIdentifiedTarget:(id)arg1 action:(SEL)arg2;
- (void)setResetTarget:(id)arg1 action:(SEL)arg2;
- (void)setState:(long long)arg1;
- (void)setSupportingWebTouchEventsGestureRecognizer:(id)arg1;
- (id)supportingWebTouchEventsGestureRecognizer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
