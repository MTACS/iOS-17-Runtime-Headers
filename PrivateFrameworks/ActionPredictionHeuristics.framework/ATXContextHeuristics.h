
@interface ATXContextHeuristics : NSObject <ATXContextHeuristicsEnvironment, ATXInformationHeuristicRefreshTriggerDelegate> {
    _PASSimpleCoalescingTimer * _coalescedRefreshOperation;
    <ATXContextHeuristicsDelegate> * _delegate;
    ATXInformationHeuristicRefreshTimeTrigger * _earliestCacheRefreshTimeTrigger;
    ATXHeuristicDevice * _heuristicDevice;
    NSMutableSet * _heuristicRefreshTriggers;
    NSMutableSet * _heuristicsPendingRefresh;
    ATXLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _queue;
    ATXContextHeuristicCache * _resultsCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXContextHeuristicsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXHeuristicDevice *heuristicDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_criteriaForRefreshJobOnDate:(id)arg1;
- (void)_queue_cleanupTimeTriggers;
- (void)_queue_refreshResultsForAllHeuristicsWithCompletionHandler:(id /* block */)arg1;
- (bool)_queue_refreshResultsForHeuristics:(id)arg1;
- (void)_queue_sendRelevantSuggestionsToBlending;
- (void)_queue_updateHeuristicName:(id)arg1 withRefreshTriggers:(id)arg2;
- (void)_removeRefreshCTSJob;
- (void)_setRefreshCTSJobForCriteria:(id)arg1 fireDate:(id)arg2 forHeuristics:(id)arg3;
- (id)delegate;
- (void)donateSuggestions:(id)arg1 forHeuristic:(id)arg2;
- (id)heuristicDevice;
- (void)informationHeuristicRefreshTrigger:(id)arg1 didTriggerRefreshForHeuristics:(id)arg2;
- (id)initWithLocationManager:(id)arg1;
- (void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
