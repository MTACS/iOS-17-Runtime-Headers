
@protocol HKWorkoutControlServer <NSObject>

@required

- (void)remote_finishAllWorkoutsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_generateFakeDataForActivityType:(void *)arg1 minutes:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_generatePauseOrResumeRequestAllowingBackgroundRuntime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
