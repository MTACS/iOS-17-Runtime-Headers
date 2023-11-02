
@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {
    NSMutableDictionary * _functionsByName;
    double  _percentComplete;
}

@property (nonatomic) double percentComplete;

- (void).cxx_destruct;
- (void)addTimingFunction:(id)arg1 withName:(id)arg2;
- (void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4;
- (void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2;
- (id)init;
- (double)percentComplete;
- (void)setPercentComplete:(double)arg1;
- (id)timingFunctionNames;
- (double)valueForFunctionWithName:(id)arg1;

@end
