
@interface HFHomeAppInstallStateArbiter : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NAFuture * _homeAppInstalledFuture;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *homeAppBundleURL;
@property (nonatomic, retain) NAFuture *homeAppInstalledFuture;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applications:(id)arg1 didInstall:(bool)arg2;
- (bool)_fastPath_isHomeAppInstalled;
- (void)addObserver:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (id)homeAppBundleURL;
- (id)homeAppInstalledFuture;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setHomeAppInstalledFuture:(id)arg1;

@end
