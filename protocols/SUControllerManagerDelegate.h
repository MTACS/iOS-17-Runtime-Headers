
@protocol SUControllerManagerDelegate <NSObject>

@optional

- (void)autoScanPerformed:(SUControllerManager *)arg1;
- (void)connectionRegained:(SUControllerManager *)arg1;
- (void)manager:(SUControllerManager *)arg1 connectionError:(NSError *)arg2;
- (void)manager:(SUControllerManager *)arg1 didChangeProgressOnApply:(SUControllerDescriptor *)arg2 progress:(SUControllerProgress *)arg3;
- (void)manager:(SUControllerManager *)arg1 didChangeProgressOnDownload:(SUControllerDownload *)arg2;
- (void)manager:(SUControllerManager *)arg1 didFailDownload:(SUControllerDownload *)arg2 withError:(NSError *)arg3;
- (void)manager:(SUControllerManager *)arg1 didFailInstallation:(SUControllerDescriptor *)arg2 withError:(NSError *)arg3;
- (void)manager:(SUControllerManager *)arg1 didFinishDownload:(SUControllerDownload *)arg2;
- (void)manager:(SUControllerManager *)arg1 didFinishDownload:(SUControllerDownload *)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4;
- (void)manager:(SUControllerManager *)arg1 didFinishDownload:(SUControllerDownload *)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4 denialReasons:(NSNumber *)arg5;
- (void)manager:(SUControllerManager *)arg1 didFinishInstallation:(SUControllerDescriptor *)arg2;
- (void)manager:(SUControllerManager *)arg1 installationOfUpdate:(SUControllerDescriptor *)arg2 canProceed:(bool)arg3;
- (void)manager:(SUControllerManager *)arg1 scanRequestDidLocateUpdate:(SUControllerDescriptor *)arg2 error:(NSError *)arg3;
- (void)manager:(SUControllerManager *)arg1 scanRequestPostponed:(SUControllerDescriptor *)arg2 error:(NSError *)arg3;
- (void)manager:(SUControllerManager *)arg1 willProceedWithInstallation:(SUControllerDescriptor *)arg2;

@end
