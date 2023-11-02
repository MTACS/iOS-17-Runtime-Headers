
@protocol _HKWorkoutObserverServerInterface <NSObject>

@required

- (void)remote_startTaskServerIfNeeded;
- (void)remote_waitForAutomaticWorkoutRecoveryWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
