
@interface HMDBackgroundSystemTaskScheduler : NSObject <HMDBackgroundSystemTaskSchedulerInterfacing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)cancelTaskRequestWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(id /* block */)arg3;
- (bool)submitTaskRequest:(id)arg1 error:(id*)arg2;
- (id)taskRequestForIdentifier:(id)arg1;

@end
