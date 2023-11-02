
@protocol SUSUISoftwareUpdateManagerDelegate <NSObject>

@required

- (void)manager:(SUSUISoftwareUpdateManager *)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 downloadProgressChanged:(SUDownload *)arg2 displayStyle:(int)arg3;
- (void)manager:(void *)arg1 promptForDevicePasscodeWithDescriptorCompletion:(void *)arg2; // needs 2 arg types, found 8: SUSUISoftwareUpdateManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, SUDescriptor *, void*

@optional

- (void)manager:(SUSUISoftwareUpdateManager *)arg1 autoUpdateScheduledStatusChanged:(bool)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 clearingSpaceForDownload:(bool)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 didReceiveBetaPrograms:(NSArray *)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(NSError *)arg4;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 download:(SUDownload *)arg2 failedWithError:(NSError *)arg3;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 downloadDidStart:(SUDownload *)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 downloadFinished:(SUDownload *)arg2;
- (void)manager:(void *)arg1 inUserInteraction:(void *)arg2; // needs 2 arg types, found 8: SUSUISoftwareUpdateManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 installFailedWithError:(NSError *)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 installFinished:(SUDescriptor *)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 installStartedForUpdate:(SUDescriptor *)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 needsLayoutSubviewsForState:(int)arg2;
- (void)manager:(void *)arg1 prepareToDownloadAndInstall:(void *)arg2 withDownload:(void *)arg3 andDownloadError:(void *)arg4 didSuccessfullyStart:(void *)arg5 withError:(void *)arg6 usingCompletionHandler:(void *)arg7; // needs 7 arg types, found 11: SUSUISoftwareUpdateManager *, SUDescriptor *, SUDownload *, NSError *, bool, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)manager:(void *)arg1 promptForDeviceLAContextWithDescriptorCompletion:(void *)arg2; // needs 2 arg types, found 8: SUSUISoftwareUpdateManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LAContext *, SUDescriptor *, void*
- (void)manager:(void *)arg1 promptForDevicePasscodeWithCompletion:(void *)arg2; // needs 2 arg types, found 7: SUSUISoftwareUpdateManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 rollingBackStateChanged:(bool)arg2 rollback:(SURollbackDescriptor *)arg3;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 scanFailedWithError:(NSError *)arg2;
- (void)manager:(SUSUISoftwareUpdateManager *)arg1 scanFoundUpdates:(SUScanResults *)arg2 error:(NSError *)arg3;
- (bool)manager:(SUSUISoftwareUpdateManager *)arg1 shouldShowAlertForScanError:(NSError *)arg2;
- (void)managerDidFinishRescan:(SUSUISoftwareUpdateManager *)arg1;

@end
