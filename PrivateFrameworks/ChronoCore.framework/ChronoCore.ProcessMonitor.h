
@interface ChronoCore.ProcessMonitor : NSObject {
    void _calloutQueue;
    void _extensionManager;
    void _hostService;
    void _keepAliveAssertionProvider;
    void _lock;
    void _lock_bundleIdentifiersToSuspensionObservers;
    void _lock_formerlyActiveSessionBundleIdentifiers;
    void _lock_formerlyActiveSessionsGraceExpirationTimer;
    void _lock_formerlyVisibleApplicationBundleIdentifiers;
    void _lock_formerlyVisibleApplicationsGraceExpirationTimer;
    void _lock_knownApplicationBundleIdentifiers;
    void _lock_knownExtensionBundleIdentifiers;
    void _lock_observers;
    void _lock_processHandlesToObserve;
    void _lock_processMonitor;
    void _lock_runningBundleIdentifiersToPIDs;
    void _lock_runningBundleIdentifiersWithExemptions;
    void _lock_runningBundleIdentifiersWithVisibleScenes;
    void _queue;
    void _subscriptions;
}

- (void).cxx_destruct;
- (id)init;

@end
