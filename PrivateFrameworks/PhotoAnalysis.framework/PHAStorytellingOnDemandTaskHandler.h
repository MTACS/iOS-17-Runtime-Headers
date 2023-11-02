
@interface PHAStorytellingOnDemandTaskHandler : NSObject <PHAServiceOperationHandling> {
    <PHAStorytellingOnDemandTaskHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executionQueue;
    PGManager * _graphManager;
    bool  _isShutdown;
    <PHAJobTimeHandlerProtocol> * _jobTimeHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _loggingConnection;
    MARootProgressReporter * _onDemandTaskProgressReporter;
    NSMutableArray * _operationsToRun;
    PHPhotoLibrary * _photoLibrary;
    PGProgressCallChecker * _progressCallChecker;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHAStorytellingOnDemandTaskHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isQuiescent;
@property (nonatomic, readonly) <PHAJobTimeHandlerProtocol> *jobTimeHandler;
@property (nonatomic, readonly) MARootProgressReporter *onDemandTaskProgressReporter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_runCachingCPAnalyticsTestWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)_runEnrichmentTestWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)cacheCPAnalyticsPropertiesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)cancelCurrentOperation;
- (id)delegate;
- (void)dequeueOperationsIfNeeded;
- (void)forceBackgroundAnalysisTasksWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)forceCancellationIfShutdown;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)handleOperation:(id)arg1;
- (bool)hasRemainingOperations;
- (id)initWithGraphManager:(id)arg1 jobTimeHandler:(id)arg2;
- (bool)isQuiescent;
- (id)jobTimeHandler;
- (id)nextOperation;
- (id)onDemandTaskProgressReporter;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestExternalAssetRelevanceProcessingWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestOnDemandTasksWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestRevGeocodingSyndicationLibraryWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestSyndicationProcessingWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)runPerformanceTest:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)shutdown;
- (bool)validateOperation:(id)arg1 forConnection:(id)arg2;

@end
