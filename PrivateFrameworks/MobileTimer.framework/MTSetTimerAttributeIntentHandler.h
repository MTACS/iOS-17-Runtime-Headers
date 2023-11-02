
@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler <INSetTimerAttributeIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_responseToSetTimerAttributeIntent:(id)arg1 withUpdatedTimer:(id)arg2 error:(id)arg3 dryRun:(bool)arg4;
- (void)_updateTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3 dryRun:(bool)arg4 completion:(id /* block */)arg5;
- (void)confirmSetTimerAttribute:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetTimerAttribute:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveTargetTimerForSetTimerAttribute:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveToDurationForSetTimerAttribute:(id)arg1 withCompletion:(id /* block */)arg2;

@end
