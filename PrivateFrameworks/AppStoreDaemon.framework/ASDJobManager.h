
@interface ASDJobManager : ASDBaseClient <ASDJobManagerClient, LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _connection;
    NSArray * _jobs;
    int  _launchNotificationToken;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    ASDJobManagerOptions * _options;
    NSMutableSet * _removedJobs;
    bool  _useLaunchServicesProgress;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addJobObserver:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)didChangeJobs:(id)arg1;
- (void)didCompleteJobs:(id)arg1 finalPhases:(id)arg2;
- (void)didUpdateProgress:(id)arg1;
- (void)didUpdateStates:(id)arg1;
- (void)finishJobs:(id)arg1;
- (void)getJobsUsingBlock:(id /* block */)arg1;
- (void)getJobsWithIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)invalidate;
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)removeJobObserver:(id)arg1;
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(id /* block */)arg2;

@end
