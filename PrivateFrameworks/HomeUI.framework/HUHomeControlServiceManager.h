
@interface HUHomeControlServiceManager : NSObject <SBSRemoteAlertHandleObserver> {
    UIViewController * _presentingViewController;
    SBSRemoteAlertHandle * _remoteAlertHandle;
    unsigned long long  _suspendedServiceClientCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) SBSRemoteAlertHandle *remoteAlertHandle;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suspendedServiceClientCount;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_launchServiceWithContext:(id)arg1;
- (void)_launchViewServiceSuspended;
- (void)_presentAlertForError:(id)arg1;
- (void)dismissService;
- (void)launchServiceSuspendedWithUserInfo:(id)arg1;
- (void)launchServiceWithContext:(id)arg1;
- (id)presentingViewController;
- (id)remoteAlertHandle;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRemoteAlertHandle:(id)arg1;
- (void)setSuspendedServiceClientCount:(unsigned long long)arg1;
- (unsigned long long)suspendedServiceClientCount;

@end
