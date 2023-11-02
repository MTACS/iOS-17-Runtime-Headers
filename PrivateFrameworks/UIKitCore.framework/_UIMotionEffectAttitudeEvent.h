
@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent {
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _attitude;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } attitude;

- (struct { double x1; double x2; double x3; double x4; })attitude;
- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1 attitude:(struct { double x1; double x2; double x3; double x4; })arg2;
- (double)velocityRelativeToPreviousEvent:(id)arg1;

@end
