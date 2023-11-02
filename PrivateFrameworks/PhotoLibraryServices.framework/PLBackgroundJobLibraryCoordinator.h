
@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {
    PLPhotoLibraryBundleCriteriaTuple * _currentPhotoLibraryBundle;
    <PLBackgroundJobLibraryCoordinatorDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingPhotoLibraryBundles;
    PLBackgroundJobStatusCenter * _statusCenter;
    PLBackgroundJobWorkerCoordinator * _workerCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLBackgroundJobLibraryCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAllBundlesCompleted;
- (void)_handleBundleComplete:(id)arg1;
- (void)_submitNextQueuedBundle;
- (id)delegate;
- (id)initWithStatusCenter:(id)arg1;
- (id)initWithWorkerCoordinator:(id)arg1;
- (id)initWithWorkerCoordinator:(id)arg1 statusCenter:(id)arg2;
- (id)pendingJobsOnBundles:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldDeferActivity;
- (void)startBackgroundJobsOnBundles:(id)arg1 withCriteria:(id)arg2;
- (void)stopBackgroundJobsOnAllBundles;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1;

@end
