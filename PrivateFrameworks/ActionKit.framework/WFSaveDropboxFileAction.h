
@interface WFSaveDropboxFileAction : WFStorageServiceAction {
    <WFSaveDropboxFileActionUserInterface> * _actionUserInterface;
    <WFFileStorageServiceOperation> * _saveOperation;
}

@property (nonatomic, retain) <WFSaveDropboxFileActionUserInterface> *actionUserInterface;
@property (nonatomic, retain) <WFFileStorageServiceOperation> *saveOperation;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (id)actionUserInterface;
- (void)cancel;
- (id)filePathKey;
- (void)finishRunningWithError:(id)arg1;
- (bool)inputsMultipleItems;
- (bool)isProgressIndeterminate;
- (bool)outputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (void)runWithRemoteUserInterface:(id)arg1 path:(id)arg2 input:(id)arg3 storageService:(id)arg4;
- (id)saveOperation;
- (void)setActionUserInterface:(id)arg1;
- (void)setSaveOperation:(id)arg1;
- (id)showPickerKey;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)storageService;

@end
