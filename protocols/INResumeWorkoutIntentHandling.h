
@protocol INResumeWorkoutIntentHandling <NSObject>

@required

- (void)handleResumeWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INResumeWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INResumeWorkoutIntentResponse *, void*

@optional

- (void)confirmResumeWorkout:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INResumeWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INResumeWorkoutIntentResponse *, void*
- (void)resolveWorkoutNameForResumeWorkout:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INResumeWorkoutIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*

@end
