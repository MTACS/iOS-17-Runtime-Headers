
@interface PromotedContentUI.TapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_scrollableAncestor;
    void kMaximumTimeSinceTap;
    void lastTrackedTouch;
    void location;
    void mostRecentTapLocation;
    void mostRecentTapTimestamp;
    void pointIsInsideView;
    void preventedTouches;
    void shouldBlockNavigation;
    void touchDownHandler;
    void touchMovedHandler;
    void touchUpHandler;
}

- (void).cxx_destruct;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
