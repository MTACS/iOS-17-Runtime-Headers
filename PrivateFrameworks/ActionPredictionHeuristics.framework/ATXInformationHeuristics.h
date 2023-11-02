
@interface ATXInformationHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate> {
    _PASSimpleCoalescingTimer * _coalescedRefreshOperation;
    <ATXInformationHeuristicsDelegate> * _delegate;
    NSMutableSet * _heuristicRefreshTriggers;
    NSMutableSet * _heuristicsPendingRefresh;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <ATXInformationHeuristicsDelegate> *delegate;

+ (id)sourceIdentifierForHeuristicWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_criteriaForRefreshJobOnDate:(id)arg1;
- (void)_refreshResultsForAllHeuristics:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)_refreshResultsForHeuristics:(id)arg1;
- (void)_setRefreshCTSJobForCriteria:(id)arg1 forHeuristics:(id)arg2;
- (id)delegate;
- (id)getResultsFromHeuristicInterpreter:(id)arg1;
- (void)informationHeuristicRefreshTrigger:(id)arg1 didTriggerRefreshForHeuristics:(id)arg2;
- (id)init;
- (void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(id /* block */)arg1;
- (void)refreshResultsForAllHeuristicsWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
