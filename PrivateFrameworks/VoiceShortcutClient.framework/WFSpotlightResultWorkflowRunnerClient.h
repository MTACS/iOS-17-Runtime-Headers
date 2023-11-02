
@interface WFSpotlightResultWorkflowRunnerClient : WFWorkflowRunnerClient {
    <WFSpotlightResultRunnable> * _runnable;
}

- (void).cxx_destruct;
- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 executionContext:(long long)arg2;
- (id)initWithRunnable:(id)arg1 surface:(unsigned long long)arg2;
- (bool)runnableRequiresSpotlightRefresh:(id)arg1;
- (void)start;

@end
