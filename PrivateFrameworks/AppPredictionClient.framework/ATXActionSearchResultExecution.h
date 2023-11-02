
@interface ATXActionSearchResultExecution : NSObject <WFWorkflowRunnerClientDelegate> {
    <ATXActionSearchResultExecutionDelegate> * _delegate;
    WFWorkflowRunViewSource * _runViewSource;
    SFSearchResult * _searchResult;
    WFSuggestionsWorkflowRunnerClient * _workflowRunnerClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXActionSearchResultExecutionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic, retain) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFSuggestionsWorkflowRunnerClient *workflowRunnerClient;

- (void).cxx_destruct;
- (bool)_delegateDoesRespond;
- (bool)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (void)_spawnShortcutExecutionWithShortcut:(id)arg1 executionContext:(long long)arg2;
- (id)delegate;
- (void)executeShortcut;
- (id)runViewSource;
- (id)searchResult;
- (void)setDelegate:(id)arg1;
- (void)setRunViewSource:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setWorkflowRunnerClient:(id)arg1;
- (id)workflowRunnerClient;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end
