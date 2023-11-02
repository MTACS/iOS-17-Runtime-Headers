
@interface HDHeartDaemonExtension : NSObject <HDHealthDaemonExtension, HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler> {
    <HDHealthDaemon> * _healthDaemon;
    NSUserDefaults * _heartNotificationsUserDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)daemonReady:(id)arg1;
- (id)initWithHealthDaemon:(id)arg1 heartNotificationsUserDefaults:(id)arg2;
- (void)performPostInstallUpdateTaskForManager:(id)arg1 completion:(id /* block */)arg2;

@end
