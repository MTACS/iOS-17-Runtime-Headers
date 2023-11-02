
@interface WKDeferringGestureRecognizer : UIGestureRecognizer {
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> { 
        id m_weakReference; 
    }  _deferringGestureDelegate;
    bool  _immediatelyFailsAfterTouchEnd;
}

@property (nonatomic) bool immediatelyFailsAfterTouchEnd;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)endDeferral:(bool)arg1;
- (bool)immediatelyFailsAfterTouchEnd;
- (id)initWithDeferringGestureDelegate:(id)arg1;
- (void)setImmediatelyFailsAfterTouchEnd:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldDeferGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
