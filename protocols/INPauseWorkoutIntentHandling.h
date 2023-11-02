
@protocol INPauseWorkoutIntentHandling <NSObject>

@required

- (void)handlePauseWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPauseWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPauseWorkoutIntentResponse *, void*

@optional

- (void)confirmPauseWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPauseWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPauseWorkoutIntentResponse *, void*
- (void)resolveWorkoutNameForPauseWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPauseWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*

@end
