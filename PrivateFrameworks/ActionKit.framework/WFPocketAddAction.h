
@interface WFPocketAddAction : WFAction <PocketAPIDelegate> {
    NSObject<OS_dispatch_group> * _addGroup;
    NSError * _lastError;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *addGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *lastError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addGroup;
- (id)contentDestinationWithError:(id*)arg1;
- (void)finishRunningWithError:(id)arg1;
- (id)lastError;
- (void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setAddGroup:(id)arg1;
- (void)setLastError:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
