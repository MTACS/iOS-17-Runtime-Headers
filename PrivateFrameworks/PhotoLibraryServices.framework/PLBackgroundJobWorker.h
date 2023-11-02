
@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol> {
    _Atomic long long  _completionHandlerAtomicCounter;
    id /* block */  _currentManagedObjectCompletionHandler;
    PLPhotoLibraryBundle * _libraryBundle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingJobs;
    _Atomic bool  _shouldDeferActivity;
    bool  _shouldStop;
    PLBackgroundJobStatusCenter * _statusCenter;
    unsigned long long  _totalJobsCount;
    _Atomic long long  _workerAtomicCounter;
    id /* block */  _workerCompleteCompletionHandler;
    NSString * _workerDetailedName;
    id /* block */  _workerForcefullyStopHandler;
    NSString * _workerName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PLPhotoLibraryBundle *libraryBundle;
@property (nonatomic) PLBackgroundJobStatusCenter *statusCenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *workerDetailedName;
@property (nonatomic, readonly) NSString *workerName;

+ (long long)availableDiskSpaceForVolumeURL:(id)arg1;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (bool)usesMultipleLibrariesConcurrently;

- (void).cxx_destruct;
- (void)_handleAllJobsCompleteInLibrary:(id)arg1 allowOutsideLimiter:(bool)arg2;
- (void)_processNextManagedObjectInLibrary:(id)arg1 continueRunning:(bool)arg2 allowOutsideLimiter:(bool)arg3;
- (bool)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
- (id)description;
- (bool)hasEnoughDiskSpaceToContinue:(id /* block */)arg1;
- (id)init;
- (id)initWithLibraryBundle:(id)arg1;
- (bool)isInterruptible;
- (id)libraryBundle;
- (id)pendingJobsInLibrary:(id)arg1;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (id)photoLibraryWithDatabaseContext:(id)arg1;
- (id)redactedDescription;
- (void)setStatusCenter:(id)arg1;
- (bool)shouldDeferActivity;
- (void)startWorkInLibrary:(id)arg1 withWorkItemsNeedingProcessing:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)statusCenter;
- (void)stopAllWork;
- (void)stopWorkingOnItem:(id)arg1;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;
- (id)workerDetailedName;
- (void)workerDidFinishWithDatabaseContext:(id)arg1;
- (id)workerName;

@end
