
@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent {
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusPosition;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } focusPosition;

- (id)copyWithTimestamp:(double)arg1;
- (struct CGPoint { double x1; double x2; })focusPosition;
- (id)initWithTimestamp:(double)arg1 focusPosition:(struct CGPoint { double x1; double x2; })arg2;
- (double)velocityRelativeToPreviousEvent:(id)arg1;

@end
