
@protocol HMDSUControllerManagerDelegate <NSObject>

@optional

- (void)manager:(id <HMDSUControllerManager>)arg1 didChangeProgressOnDownload:(id <HMDSUControllerDownload>)arg2;
- (void)manager:(id <HMDSUControllerManager>)arg1 didFailDownload:(id <HMDSUControllerDownload>)arg2 withError:(NSError *)arg3;
- (void)manager:(id <HMDSUControllerManager>)arg1 didFailInstallation:(id <HMDSUControllerDescriptor>)arg2 withError:(NSError *)arg3;
- (void)manager:(id <HMDSUControllerManager>)arg1 didFinishDownload:(id <HMDSUControllerDownload>)arg2;
- (void)manager:(id <HMDSUControllerManager>)arg1 didFinishDownload:(id <HMDSUControllerDownload>)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4;
- (void)manager:(id <HMDSUControllerManager>)arg1 didFinishDownload:(id <HMDSUControllerDownload>)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4 denialReasons:(NSNumber *)arg5;
- (void)manager:(id <HMDSUControllerManager>)arg1 didFinishInstallation:(id <HMDSUControllerDescriptor>)arg2;
- (void)manager:(id <HMDSUControllerManager>)arg1 scanRequestDidLocateUpdate:(id <HMDSUControllerDescriptor>)arg2 error:(NSError *)arg3;
- (void)manager:(id <HMDSUControllerManager>)arg1 scanRequestPostponed:(id <HMDSUControllerDescriptor>)arg2 error:(NSError *)arg3;

@end
