
@interface INTimerStateResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTimerStateToConfirm:(long long)arg1;
+ (id)successWithResolvedTimerState:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(id /* block */)arg4;

@end
