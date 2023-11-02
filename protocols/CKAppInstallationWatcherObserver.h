
@protocol CKAppInstallationWatcherObserver <NSObject>

@required

- (void)appInstallationWatcher:(CKAppInstallationWatcher *)arg1 addedAppInstallation:(CKAppInstallation *)arg2;
- (void)appInstallationWatcher:(CKAppInstallationWatcher *)arg1 changedAppInstallation:(CKAppInstallation *)arg2;

@end
