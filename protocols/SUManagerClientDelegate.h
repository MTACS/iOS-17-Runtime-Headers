
@protocol SUManagerClientDelegate <NSObject>

@optional

- (void)automaticUpdateV2EnabledDidChange:(SUManagerClient *)arg1;
- (void)client:(SUManagerClient *)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(SUDescriptor *)arg2 withError:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 clearingSpaceForDownload:(SUDownload *)arg2 clearingSpace:(bool)arg3;
- (void)client:(SUManagerClient *)arg1 downloadDidFail:(SUDownload *)arg2 withError:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 downloadDidFinish:(SUDownload *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadDidFinish:(SUDownload *)arg2 withInstallPolicy:(SUInstallPolicy *)arg3;
- (void)client:(SUManagerClient *)arg1 downloadDidStart:(SUDownload *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadProgressDidChange:(SUDownload *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadWasInvalidatedForNewUpdateAvailable:(SUDescriptor *)arg2;
- (void)client:(SUManagerClient *)arg1 downloadWasInvalidatedForNewUpdatesAvailable:(SUScanResults *)arg2;
- (void)client:(SUManagerClient *)arg1 handleUIForDDMDeclaration:(SUCoreDDMDeclaration *)arg2;
- (void)client:(void *)arg1 inUserInteraction:(void *)arg2; // needs 2 arg types, found 8: SUManagerClient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)client:(SUManagerClient *)arg1 installDidFail:(SUDescriptor *)arg2 withError:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 installDidFinish:(SUDescriptor *)arg2;
- (void)client:(SUManagerClient *)arg1 installDidStart:(SUDescriptor *)arg2;
- (void)client:(SUManagerClient *)arg1 installPolicyDidChange:(SUInstallPolicy *)arg2;
- (void)client:(SUManagerClient *)arg1 installTonightScheduled:(bool)arg2 operationID:(NSUUID *)arg3;
- (void)client:(void *)arg1 installWantsToStart:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SUManagerClient *, SUDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)client:(SUManagerClient *)arg1 managedInstallationRequested:(SUInstallPolicy *)arg2;
- (void)client:(SUManagerClient *)arg1 presentingRecommendedUpdate:(SUDescriptor *)arg2 shouldPresent:(bool)arg3;
- (void)client:(SUManagerClient *)arg1 rollbackDidFail:(SURollbackDescriptor *)arg2 withError:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 rollbackDidFinish:(SURollbackDescriptor *)arg2;
- (void)client:(SUManagerClient *)arg1 rollbackDidStart:(SURollbackDescriptor *)arg2;
- (void)client:(void *)arg1 rollbackReadyToStart:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: SUManagerClient *, SURollbackDescriptor *, SURollbackOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, SURollbackDescriptor *, NSError *, void*
- (void)client:(SUManagerClient *)arg1 rollbackSuggested:(SUDescriptor *)arg2 info:(SURollbackSuggestionInfo *)arg3;
- (void)client:(SUManagerClient *)arg1 scanDidCompleteForOptions:(SUScanOptions *)arg2 results:(SUScanResults *)arg3 error:(NSError *)arg4;
- (void)client:(SUManagerClient *)arg1 scanDidCompleteWithNewUpdateAvailable:(SUDescriptor *)arg2 error:(NSError *)arg3;
- (void)client:(SUManagerClient *)arg1 scanRequestDidFinishForOptions:(SUScanOptions *)arg2 results:(SUScanResults *)arg3 error:(NSError *)arg4;
- (void)client:(SUManagerClient *)arg1 scanRequestDidFinishForOptions:(SUScanOptions *)arg2 update:(SUDescriptor *)arg3 error:(NSError *)arg4;
- (void)client:(SUManagerClient *)arg1 scanRequestDidStartForOptions:(SUScanOptions *)arg2;
- (void)client:(SUManagerClient *)arg1 scheduledRollbackReadyForReboot:(SURollbackDescriptor *)arg2;
- (void)deviceBootedAfterSplatOnlyRollback:(SUManagerClient *)arg1 rollbackDescriptor:(SURollbackDescriptor *)arg2;
- (void)deviceBootedAfterSplatOnlyUpdate:(SUManagerClient *)arg1;
- (void)userWantsToDeferInstall:(SUManagerClient *)arg1;

@end
