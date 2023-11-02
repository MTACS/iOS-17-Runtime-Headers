
@interface _ShellLauncher : NSObject {
    NSMutableArray * _launchCompletions;
    bool  _launching;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_queue_completeWithPid:(int)arg1 error:(id)arg2;
- (void)_queue_launchWithCompletion:(id /* block */)arg1;
- (void)_queue_launchWithRetries:(int)arg1;
- (id)init;
- (void)launchWithCompletion:(id /* block */)arg1;

@end
