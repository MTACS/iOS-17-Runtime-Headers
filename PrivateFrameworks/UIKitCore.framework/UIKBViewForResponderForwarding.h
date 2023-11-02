
@interface UIKBViewForResponderForwarding : UIView {
    UIView * _responderForForwarding;
}

@property (nonatomic, retain) UIView *responderForForwarding;

- (void).cxx_destruct;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)responderForForwarding;
- (void)setResponderForForwarding:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
