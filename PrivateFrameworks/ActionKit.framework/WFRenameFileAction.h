
@interface WFRenameFileAction : WFAction {
    WFFileRepresentation * _parentDirectory;
}

@property (nonatomic, retain) WFFileRepresentation *parentDirectory;

- (void).cxx_destruct;
- (void)finishRunningWithFile:(id)arg1 error:(id)arg2;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (id)parentDirectory;
- (void)renameFile:(id)arg1 name:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setParentDirectory:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
