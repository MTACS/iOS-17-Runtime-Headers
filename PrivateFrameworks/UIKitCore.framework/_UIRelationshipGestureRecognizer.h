
@interface _UIRelationshipGestureRecognizer : UIGestureRecognizer {
    bool  _failsOnTouchesCancelled;
    bool  _succeedsOnTouchesEnded;
}

@property (nonatomic) bool failsOnTouchesCancelled;
@property (nonatomic) bool succeedsOnTouchesEnded;

- (void)_fail;
- (bool)_isGestureType:(long long)arg1;
- (void)_succeed;
- (bool)failsOnTouchesCancelled;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setFailsOnTouchesCancelled:(bool)arg1;
- (void)setSucceedsOnTouchesEnded:(bool)arg1;
- (bool)succeedsOnTouchesEnded;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
