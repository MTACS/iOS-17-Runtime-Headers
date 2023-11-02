
@interface PHAStorytellingWorker : PHAWorker <PHAClientDispatcher, PHAStorytellingOnDemandTaskHandlerDelegate> {
    PHAStorytellingClientRequestHandler * _graphClientHandler;
    PGManager * _graphManager;
    NSObject<OS_os_log> * _loggingConnection;
    unsigned long long  _state;
    PHAStorytellingOnDemandTaskHandler * _storytellingOnDemandTaskHandler;
    <PHATask> * _taskToRun;
    NSMutableSet * _taskTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_legacyTasksForBackgroundAnalysis;
+ (long long)applicationDataFolderIdentifier;
+ (Class)clientQueryHandlerClass;
+ (id)graphNonIntensiveTasks;
+ (Class)onDemandTaskHandlerClass;
+ (id)photoLibraryNonIntensiveTasks;
+ (id)tasksForBackgroundAnalysis;
+ (short)workerType;

- (void).cxx_destruct;
- (bool)_shouldRunTaskWithName:(id)arg1 period:(double)arg2 version:(unsigned long long)arg3;
- (bool)allowsForegroundTasks;
- (void)cooldown;
- (bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1;
- (bool)isQuiescent;
- (id)loggingConnection;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)onDemandTaskHandlerDidFinishOperation:(id)arg1;
- (void)onDemandTaskHandlerStartingOperation:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (bool)shouldAllowBackgroundActivity;
- (void)shutdown;
- (void)startListeningToLibraryChanges;
- (id)statusAsDictionary;
- (void)stopListeningToLibraryChanges;
- (id)targetForInvocation:(id)arg1 shouldBackgroundActivities:(bool*)arg2;
- (id)tasksForScenario:(unsigned long long)arg1;
- (void)updateState:(unsigned long long)arg1;
- (bool)validateOperation:(id)arg1 forConnection:(id)arg2;
- (void)warmupWithProgressBlock:(id /* block */)arg1;
- (unsigned long long)workerStateForScenario:(unsigned long long)arg1;

@end
