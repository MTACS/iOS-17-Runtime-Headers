
@interface RBAnimation : NSObject <NSCopying> {
    struct Animation { 
        struct vector<RB::Animation::TermOrArg, 6UL, unsigned int> { 
            unsigned char _p[24]; 
            union { /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x_0_2_1; void*x_0_2_2; const void*x_0_2_3; bycopy const _Atomic const void*x_0_2_4; } *_p; 
            unsigned int _size; 
            unsigned int _capacity; 
        } terms_and_args; 
    }  _animation;
}

@property (nonatomic, readonly) double activeDuration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)activeDuration;
- (void)addBezierDuration:(double)arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)addDelay:(double)arg1;
- (void)addPreset:(unsigned int)arg1 duration:(double)arg2;
- (void)addRepeatCount:(double)arg1 autoreverses:(bool)arg2;
- (void)addSampledFunctionWithDuration:(double)arg1 count:(unsigned long long)arg2 values:(const float*)arg3;
- (void)addSpeed:(double)arg1;
- (void)addSpringDuration:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 initialVelocity:(double)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)evaluateAtTime:(double)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeAll;

@end
