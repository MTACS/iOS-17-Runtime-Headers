
@interface WFDownloadURLAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (void)configureHTTPBodyForRequest:(id)arg1 withMethod:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)getContentsOfURLItem:(id)arg1 expectedByteCountHandler:(id /* block */)arg2 writtenByteCountHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
