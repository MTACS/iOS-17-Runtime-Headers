
@interface PHAWorker : NSObject <PHAJobTimeHandlerProtocol, PHAServiceOperationHandling, PHAWorkerConfiguration> {
    PHAServiceCancelableOperation * _currentOperation;
    NSObject<OS_os_log> * _loggingConnection;
    PHAManager * _photoAnalysisManager;
    bool  _shutdownHasBeenCalled;
    NSObject<OS_dispatch_queue> * _userInitiatedRequestQueue;
    bool  _warmedUp;
}

@property (retain) PHAServiceCancelableOperation *currentOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEnabled;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (getter=isQuiescent, readonly) bool quiescent;
@property (readonly) Class superclass;
@property (getter=isWarmedUp, nonatomic) bool warmedUp;

+ (long long)applicationDataFolderIdentifier;
+ (void)configureInterface:(id)arg1;
+ (id)persistentStorageDirectoryURLForPhotoLibrary:(id)arg1;
+ (bool)persistsState;
+ (bool)runsExclusively;
+ (short)workerType;

- (void).cxx_destruct;
- (void)assertUserInitiatedRequestQueue;
- (bool)canRunWhenGraphIsLoaded;
- (bool)completedJobTodayForKey:(id)arg1;
- (void)cooldown;
- (id)currentOperation;
- (bool)didExceedTimeInterval:(double)arg1 forKey:(id)arg2;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (void)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (void)handleOperation:(id)arg1;
- (bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)init;
- (id)initWithPhotoAnalysisManager:(id)arg1;
- (bool)isEnabled;
- (bool)isQuiescent;
- (bool)isWarmedUp;
- (id)libraryScopedWorkerPreferences;
- (id)libraryScopedWorkerPreferencesURL;
- (id)loggingConnection;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)persistentStorageDirectoryURL;
- (id)photoAnalysisManager;
- (id)photoLibrary;
- (void)pingWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)setCurrentOperation:(id)arg1;
- (void)setLastCompletedDate:(id)arg1 andVersion:(unsigned long long)arg2 forTaskName:(id)arg3;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)setWarmedUp:(bool)arg1;
- (void)shutdown;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)startup;
- (id)statusAsDictionary;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2;
- (bool)validateOperation:(id)arg1 forConnection:(id)arg2;
- (unsigned long long)versionForTaskName:(id)arg1;
- (void)warmupWithProgressBlock:(id /* block */)arg1;

@end
