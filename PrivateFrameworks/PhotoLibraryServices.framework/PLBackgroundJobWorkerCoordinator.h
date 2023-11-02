
@interface PLBackgroundJobWorkerCoordinator : NSObject {
    NSMutableDictionary * _cachedCriteriaForPendingWorkers;
    PLBackgroundJobWorkerCriteriaTuple * _currentWorker;
    <PLBackgroundJobWorkerCoordinatorDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingWorkers;
    _Atomic bool  _shouldDeferActivity;
    PLBackgroundJobStatusCenter * _statusCenter;
    NSArray * _workerClassesAsStrings;
    short  _workerMode;
}

@property (nonatomic) <PLBackgroundJobWorkerCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleAllWorkersCompleted;
- (void)_processNextWorkerInLibraryBundle:(id)arg1;
- (id)_workersForBundle:(id)arg1;
- (id)delegate;
- (id)initWithWorkerClassesAsStrings:(id)arg1;
- (id)initWithWorkerClassesAsStrings:(id)arg1 workerMode:(short)arg2 statusCenter:(id)arg3;
- (id)initWithWorkerCoordinatorWorkerMode:(short)arg1 statusCenter:(id)arg2;
- (id)pendingJobsForBundle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldDeferActivity;
- (void)stopAllBackgorundJobs;
- (void)submitBundleForProcessing:(id)arg1 withCriteria:(id)arg2;

@end
