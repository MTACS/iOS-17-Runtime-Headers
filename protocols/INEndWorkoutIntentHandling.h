
@protocol INEndWorkoutIntentHandling <NSObject>

@required

- (void)handleEndWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INEndWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INEndWorkoutIntentResponse *, void*

@optional

- (void)confirmEndWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INEndWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INEndWorkoutIntentResponse *, void*
- (void)resolveWorkoutNameForEndWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INEndWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*

@end
