
@interface _UIPressGestureRecognizer : UIGestureRecognizer {
    struct { 
        unsigned int shouldAllowPress : 1; 
    }  _delegateRespondsTo;
}

@property (nonatomic) <_UIPressGestureRecognizerDelegate> *delegate;

- (bool)_shouldReceivePress:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;

@end
