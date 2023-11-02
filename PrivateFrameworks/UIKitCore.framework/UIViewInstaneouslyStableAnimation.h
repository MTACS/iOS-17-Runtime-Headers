
@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {
    <UIVectorOperatable> * _targetValue;
    <UIVectorOperatable> * _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIVectorOperatable> *targetValue;

- (void).cxx_destruct;
- (id)initWithTargetValue:(id)arg1 velocity:(id)arg2;
- (bool)isStable;
- (void)setTargetValue:(id)arg1;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (id)targetValue;
- (id)value;
- (id)velocity;

@end
