
@interface WFSearchLocalBusinessesAction : WFAction {
    MKLocalSearch * _localSearch;
}

@property (nonatomic, retain) MKLocalSearch *localSearch;

- (void).cxx_destruct;
- (void)cancel;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (id)localSearch;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runSearchWithLocation:(id)arg1 inputDisclosureLevel:(unsigned long long)arg2;
- (void)setLocalSearch:(id)arg1;
- (bool)shouldUseMetricSystem;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
