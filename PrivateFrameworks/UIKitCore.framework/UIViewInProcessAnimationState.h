
@interface UIViewInProcessAnimationState : UIViewAnimationState {
    id /* block */  _animationAndComposerGetter;
    bool  _retargeted;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ animationAndComposerGetter;
@property (nonatomic) bool retargeted;
@property (nonatomic) long long type;

+ (bool)isKeySupported:(id)arg1;

- (void).cxx_destruct;
- (bool)_decomposeActionIfPossibleForLayer:(id)arg1 key:(id)arg2 view:(id)arg3 currentValueVector:(id)arg4 targetValue:(id)arg5;
- (void)_runActionForLayer:(id)arg1 key:(id)arg2 view:(id)arg3 currentValueVector:(id)arg4 targetValue:(id)arg5 force:(bool)arg6;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(id /* block */)arg3 newValueCallback:(id /* block */)arg4 removedCallback:(id /* block */)arg5 animatableProperty:(id)arg6;
- (void)animatePropertyWithKey:(id)arg1 view:(id)arg2 forceNew:(bool)arg3 currentValue:(id)arg4 targetValue:(id)arg5 preTickShouldRemoveCallback:(id /* block */)arg6 newValueCallback:(id /* block */)arg7 removedCallback:(id /* block */)arg8;
- (id /* block */)animationAndComposerGetter;
- (id)description;
- (id)init;
- (bool)retargeted;
- (void)setAnimationAndComposerGetter:(id /* block */)arg1;
- (void)setRetargeted:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id /* block */)arg7 completion:(id /* block */)arg8;
- (bool)shouldAnimatePropertyWithKey:(id)arg1;
- (long long)type;

@end
