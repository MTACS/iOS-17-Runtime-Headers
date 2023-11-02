
@interface WFGetFileAction : WFStorageServiceAction

- (id)contentDestinationWithError:(id*)arg1;
- (bool)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end
