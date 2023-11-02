
@interface SBHSelectedApplicationDataSource : NSObject <BSDescriptionProviding, LSApplicationWorkspaceObserverProtocol, SBHIconModelApplicationDataSource, SBSHomeScreenServiceIconBadgeValueObserver> {
    <BSInvalidatable> * _appInfoObserverAssertion;
    NSMutableDictionary * _applicationPlaceholders;
    NSMutableDictionary * _applications;
    NSMutableDictionary * _bundleIdentifierToInstallProgresses;
    NSMapTable * _installProgressBundleIdentifiers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _installProgressBundleIdentifiersLock;
    NSHashTable * _observers;
    NSMutableSet * _trackedApplicationBundleIdentifiers;
    LSApplicationWorkspace * _workspace;
}

@property (nonatomic, retain) <BSInvalidatable> *appInfoObserverAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) LSApplicationWorkspace *workspace;

+ (id)homeScreenService;
+ (id)keyPathsForObservingInstallProgress;

- (void).cxx_destruct;
- (void)_lock_beginObservingInstallProgress:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_lock_endObservingInstallProgress:(id)arg1;
- (void)addApplicationsForBundleIdentifiers:(id)arg1 forcePlaceholders:(bool)arg2;
- (void)addIconModelApplicationDataSourceObserver:(id)arg1;
- (id)allApplicationPlaceholdersForIconModel:(id)arg1;
- (id)allApplicationsForIconModel:(id)arg1;
- (id)appInfoObserverAssertion;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (id)applicationPlaceholderWithBundleIdentifier:(id)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)beginTrackingApplicationsWithBundleIdentifiers:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)endTrackingAllApplications;
- (void)endTrackingApplicationsWithBundleIdentifiers:(id)arg1;
- (void)homeScreenService:(id)arg1 applicationIconInfoChangedForBundleIdentifiers:(id)arg2;
- (id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeApplicationsForBundleIdentifiers:(id)arg1;
- (void)removeIconModelApplicationDataSourceObserver:(id)arg1;
- (void)setAppInfoObserverAssertion:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)updateStateOfPlaceholder:(id)arg1 fromProgress:(id)arg2;
- (void)updateStateOfPlaceholder:(id)arg1 withInstallState:(unsigned long long)arg2 installPhase:(unsigned long long)arg3 installProgress:(double)arg4;
- (id)workspace;

@end
