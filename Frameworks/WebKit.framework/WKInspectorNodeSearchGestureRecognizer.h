
@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer {
    struct RetainPtr<UITouch> { 
        void *m_ptr; 
    }  _touch;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processTouches:(id)arg1 state:(long long)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
