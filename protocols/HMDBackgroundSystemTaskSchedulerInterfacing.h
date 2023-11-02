
@protocol HMDBackgroundSystemTaskSchedulerInterfacing <NSObject>

@required

- (bool)cancelTaskRequestWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (bool)registerForTaskWithIdentifier:(void *)arg1 usingQueue:(void *)arg2 launchHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HMDBackgroundSystemTask> *, void*
- (bool)submitTaskRequest:(HMDBackgroundSystemTaskRequest *)arg1 error:(id*)arg2;
- (HMDBackgroundSystemTaskRequest *)taskRequestForIdentifier:(NSString *)arg1;

@end
