
@protocol SUManagerClientInterface

@required

- (void)autoInstallOperationDidConsent:(NSUUID *)arg1;
- (void)autoInstallOperationDidExpire:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)autoInstallOperationIsReadyToInstall:(void *)arg1 withResult:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)autoInstallOperationPasscodePolicyChanged:(NSUUID *)arg1 passcodePolicyType:(unsigned long long)arg2;
- (void)autoInstallOperationWasCancelled:(NSUUID *)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)clearingSpaceForDownload:(SUDownload *)arg1 clearing:(bool)arg2;
- (void)deviceBootedAfterRollback:(SURollbackDescriptor *)arg1;
- (void)deviceBootedAfterSplatUpdate;
- (void)downloadDidFail:(SUDownload *)arg1 withError:(NSError *)arg2;
- (void)downloadDidFinish:(SUDownload *)arg1 withInstallPolicy:(SUInstallPolicy *)arg2;
- (void)downloadDidStart:(SUDownload *)arg1;
- (void)downloadProgressDidChange:(SUDownload *)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(SUDescriptor *)arg1;
- (void)downloadWasInvalidatedForNewUpdatesAvailable:(SUScanResults *)arg1;
- (void)handleUIForDDMDeclaration:(SUCoreDDMDeclaration *)arg1;
- (void)inUserInteraction:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)installDidFail:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)installDidFinish:(SUDescriptor *)arg1;
- (void)installDidStart:(SUDescriptor *)arg1;
- (void)installPolicyDidChange:(SUInstallPolicy *)arg1;
- (void)installTonightScheduled:(bool)arg1 operationID:(NSUUID *)arg2;
- (void)installWantsToStart:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SUDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)managedInstallationRequested:(SUInstallPolicy *)arg1;
- (void)presentingRecommendedUpdate:(SUDescriptor *)arg1 shouldPresent:(bool)arg2;
- (void)rollbackDidFail:(SURollbackDescriptor *)arg1 withError:(NSError *)arg2;
- (void)rollbackDidFinish:(SURollbackDescriptor *)arg1;
- (void)rollbackDidStart:(SURollbackDescriptor *)arg1;
- (void)rollbackReadyForReboot:(SURollbackDescriptor *)arg1;
- (void)rollbackReadyToStart:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: SURollbackDescriptor *, SURollbackOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, SURollbackDescriptor *, NSError *, void*
- (void)rollbackSuggested:(SUDescriptor *)arg1 info:(SURollbackSuggestionInfo *)arg2;
- (void)scanDidCompleteForOptions:(SUScanOptions *)arg1 results:(SUScanResults *)arg2 error:(NSError *)arg3;
- (void)scanDidCompleteWithNewUpdateAvailable:(SUDescriptor *)arg1 error:(NSError *)arg2;
- (void)scanRequestDidFinishForOptions:(SUScanOptions *)arg1 results:(SUScanResults *)arg2 error:(NSError *)arg3;
- (void)scanRequestDidFinishForOptions:(SUScanOptions *)arg1 update:(SUDescriptor *)arg2 error:(NSError *)arg3;
- (void)scanRequestDidStartForOptions:(SUScanOptions *)arg1;
- (void)userWantsToDeferInstall;

@end
