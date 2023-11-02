
@interface HFHomeAppInstallController : NSObject <ASDRequestObserver, LSApplicationWorkspaceObserverProtocol> {
    NAFuture * _activeHomeAppDownloadFuture;
    long long  _lastReportedStatus;
    ASDSystemAppRequest * _request;
    NSMutableSet * _statusUpdaters;
}

@property (nonatomic, retain) NAFuture *activeHomeAppDownloadFuture;
@property (nonatomic, readonly) LSApplicationProxy *appProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastReportedStatus;
@property (nonatomic, retain) ASDSystemAppRequest *request;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSMutableSet *statusUpdaters;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_dispatchStatusUpdate:(long long)arg1;
- (bool)_isHomeAppInstalled;
- (id)activeHomeAppDownloadFuture;
- (id)appProxy;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (id)downloadHomeAppWithUpdateBlock:(id /* block */)arg1;
- (id)init;
- (long long)lastReportedStatus;
- (id)request;
- (void)request:(id)arg1 didCompleteWithError:(id)arg2;
- (void)setActiveHomeAppDownloadFuture:(id)arg1;
- (void)setLastReportedStatus:(long long)arg1;
- (void)setRequest:(id)arg1;
- (long long)status;
- (id)statusUpdaters;

@end
