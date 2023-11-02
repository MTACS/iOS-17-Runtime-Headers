
@protocol SUSUISoftwareUpdateClientManagerDelegate <NSObject>

@required

- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 autoUpdateScheduleStateChanged:(bool)arg2 autoInstallOperation:(SUAutoInstallOperation *)arg3;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 clearingSpaceForDownload:(SUDownload *)arg2 clearingSpace:(bool)arg3;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 downloadDidFail:(SUDownload *)arg2 withError:(NSError *)arg3;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 downloadDidFinish:(SUDownload *)arg2 withInstallPolicy:(SUInstallPolicy *)arg3;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 downloadDidStart:(SUDownload *)arg2;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 downloadProgressDidChange:(SUDownload *)arg2;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 downloadWasInvalidatedForNewUpdatesAvailable:(SUScanResults *)arg2;
- (void)manager:(void *)arg1 inUserInteraction:(void *)arg2; // needs 2 arg types, found 8: SUSUISoftwareUpdateClientManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 installDidFail:(SUDescriptor *)arg2 withError:(NSError *)arg3;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 installDidFinish:(SUDescriptor *)arg2;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 installDidStart:(SUDescriptor *)arg2;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 rollingBackStateChanged:(bool)arg2 rollback:(SURollbackDescriptor *)arg3;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 scanRequestDidFinishForOptions:(SUScanOptions *)arg2 results:(SUScanResults *)arg3 error:(NSError *)arg4;
- (void)manager:(SUSUISoftwareUpdateClientManager *)arg1 scanRequestDidStartForOptions:(SUScanOptions *)arg2;

@end
