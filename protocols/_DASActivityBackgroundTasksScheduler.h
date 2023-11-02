
@protocol _DASActivityBackgroundTasksScheduler <NSObject>

@required

- (void)cancelAllTaskRequests;
- (void)cancelTaskRequestWithIdentifier:(NSString *)arg1;
- (void)completeTaskRequest:(_DASActivity *)arg1;
- (void)getPendingTaskRequestsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setBackgroundTasksSchedulerDelegate:(id <_DASActivityBackgroundTasksSchedulerDelegate>)arg1;
- (NSError *)submitTaskRequest:(_DASActivity *)arg1;

@end
