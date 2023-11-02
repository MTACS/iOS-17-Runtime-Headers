
@interface UIViewFrictionBounceAnimation : NSObject <UIIntervalAnimating> {
    double  _bounce;
    id  _current;
    double  _deceleration;
    id  _epsilon;
    id  _intermediate;
    id  _stableTarget;
    <UIVectorOperatable> * _targetValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIVectorOperatable> *targetValue;

- (void).cxx_destruct;
- (id)initWithCurrent:(id)arg1 target:(id)arg2;
- (bool)isStable;
- (void)setTargetValue:(id)arg1;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (id)targetValue;
- (id)updatedTarget;
- (id)velocity;

@end
