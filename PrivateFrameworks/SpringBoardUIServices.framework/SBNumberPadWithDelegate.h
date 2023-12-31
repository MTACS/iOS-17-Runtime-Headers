
@interface SBNumberPadWithDelegate : TPNumberPad {
    <SBNumberPadDelegate> * _delegate;
}

@property (nonatomic) <SBNumberPadDelegate> *delegate;

- (void).cxx_destruct;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (id)buttonForPoint:(struct CGPoint { double x1; double x2; })arg1 forEvent:(id)arg2;
- (void)buttonUp:(id)arg1;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)touchAtPoint:(struct CGPoint { double x1; double x2; })arg1 isCloseToButton:(id)arg2;

@end
