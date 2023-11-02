
@protocol HKLiveWorkoutDataSourceServerInterface <NSObject>

@required

- (void)remote_setDataSourceConfiguration:(HKWorkoutDataSourceConfiguration *)arg1;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_synchronizeWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
