
@protocol INStartWorkoutIntentHandling <NSObject>

@required

- (void)handleStartWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INStartWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStartWorkoutIntentResponse *, void*

@optional

- (void)confirmStartWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INStartWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStartWorkoutIntentResponse *, void*
- (void)resolveGoalValueForStartWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INStartWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDoubleResolutionResult *, void*
- (void)resolveIsOpenEndedForStartWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INStartWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveWorkoutGoalUnitTypeForStartWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INStartWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INWorkoutGoalUnitTypeResolutionResult *, void*
- (void)resolveWorkoutLocationTypeForStartWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INStartWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INWorkoutLocationTypeResolutionResult *, void*
- (void)resolveWorkoutNameForStartWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INStartWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*

@end
