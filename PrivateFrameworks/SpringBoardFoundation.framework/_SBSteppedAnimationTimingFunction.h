
@interface _SBSteppedAnimationTimingFunction : NSObject {
    struct SBNormalizedTransitionInterval { 
        double start; 
        double duration; 
    }  _constrainedRange;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, readonly) struct SBNormalizedTransitionInterval { double x1; double x2; } constrainedRange;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

+ (id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;

- (void).cxx_destruct;
- (struct SBNormalizedTransitionInterval { double x1; double x2; })constrainedRange;
- (id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;
- (id)timingFunction;
- (double)valueAtPercentage:(double)arg1;

@end
