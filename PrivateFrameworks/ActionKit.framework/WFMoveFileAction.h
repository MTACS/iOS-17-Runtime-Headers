
@interface WFMoveFileAction : WFAction {
    <WFFileStorageServiceOperation> * _saveOperation;
}

@property (nonatomic, retain) <WFFileStorageServiceOperation> *saveOperation;

- (void).cxx_destruct;
- (id)contentDestinationWithError:(id*)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)saveOperation;
- (void)setSaveOperation:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
