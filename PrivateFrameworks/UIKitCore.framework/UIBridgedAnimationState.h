
@interface UIBridgedAnimationState : UIViewAnimationState {
    <UIBridgedAnimationContext> * _bridgingContext;
}

@property (nonatomic, retain) <UIBridgedAnimationContext> *bridgingContext;

- (void).cxx_destruct;
- (void)_runActionForLayer:(id)arg1 key:(id)arg2 view:(id)arg3 currentValue:(id)arg4 targetValue:(id)arg5;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (id)bridgingContext;
- (id)init;
- (void)setBridgingContext:(id)arg1;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id /* block */)arg7 completion:(id /* block */)arg8;
- (bool)shouldAnimatePropertyWithKey:(id)arg1;

@end
