
@interface WFSaveFileAction : WFStorageServiceAction {
    <WFFileStorageServiceOperation> * _saveOperation;
}

@property (nonatomic, retain) <WFFileStorageServiceOperation> *saveOperation;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)cancel;
- (id)contentDestinationWithError:(id*)arg1;
- (id)filePathKey;
- (void)finishRunningWithError:(id)arg1;
- (bool)inputsMultipleItems;
- (bool)isProgressIndeterminate;
- (id)minimumSupportedClientVersion;
- (bool)outputsMultipleItems;
- (bool)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 storageService:(id)arg3 subpath:(id)arg4;
- (void)runWithStorageService:(id)arg1 directory:(id)arg2 subpath:(id)arg3 input:(id)arg4;
- (id)saveOperation;
- (void)setSaveOperation:(id)arg1;
- (id)showPickerKey;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updatePathPrefix;

@end
