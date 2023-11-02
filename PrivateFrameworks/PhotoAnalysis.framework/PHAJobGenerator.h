
@interface PHAJobGenerator : NSObject {
    NSMutableDictionary * _countOfJobsGeneratedByWorkerType;
    long long  _generatedJobCountGoal;
    bool  _graphIncompatibleWorkersAreInhibited;
    PHAWorkerHealthMonitor * _healthMonitor;
    PHPhotoLibrary * _library;
    bool  _skippedSomeWorker;
}

@property (nonatomic, readonly) NSMutableDictionary *countOfJobsGeneratedByWorkerType;
@property (nonatomic) long long generatedJobCountGoal;
@property bool graphIncompatibleWorkersAreInhibited;
@property (nonatomic, readonly) PHAWorkerHealthMonitor *healthMonitor;
@property (nonatomic, readonly) PHPhotoLibrary *library;

- (void).cxx_destruct;
- (void)_incrementGeneratedJobCountForWorkerType:(short)arg1;
- (void)_jumpToGoalJobCountForWorkerType:(short)arg1;
- (id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(id)arg1 workInfoReaderMode:(id)arg2 scenario:(unsigned long long)arg3 allowLoadBalanceSkip:(bool)arg4 additionalStatesToExclude:(id)arg5 askAboutAdditionalJobs:(bool)arg6 canUseNetwork:(bool)arg7 defaultsDisabledKey:(id)arg8 failureReason:(id*)arg9;
- (bool)_workerUnavailableForWorkerType:(short)arg1 defaultsDisabledKey:(id)arg2 unavailableReason:(id*)arg3;
- (id)countOfJobsGeneratedByWorkerType;
- (id)generateJobWithCurrentConstraints:(id)arg1 workersByType:(id)arg2;
- (long long)generatedJobCountGoal;
- (bool)graphIncompatibleWorkersAreInhibited;
- (id)healthMonitor;
- (id)initWithHealthMonitor:(id)arg1 library:(id)arg2;
- (id)library;
- (void)setGeneratedJobCountGoal:(long long)arg1;
- (void)setGraphIncompatibleWorkersAreInhibited:(bool)arg1;

@end
