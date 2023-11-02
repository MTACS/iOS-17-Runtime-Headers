
@protocol HDHealthDaemon <NSObject>

@required

- (<HDNanoAlertSuppressionService> *)alertSuppressionService;
- (HDBackgroundTaskScheduler *)backgroundTaskScheduler;
- (_HKBehavior *)behavior;
- (HDCacheDeleteCoordinator *)cacheDeleteCoordinator;
- (id)daemonExtensionWithIdentifier:(NSString *)arg1;
- (NSArray *)daemonExtensionsConformingToProtocol:(Protocol *)arg1;
- (HDPluginManager *)pluginManager;
- (HDPostInstallUpdateManager *)postInstallUpdateManager;
- (HDPrimaryProfile *)primaryProfile;
- (NSArray *)protectedResourceStoreProviders;
- (void)registerDaemonActivatedObserver:(id <HDHealthDaemonActivatedObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)registerDaemonReadyObserver:(id <HDHealthDaemonReadyObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)registerProtectedResourceStoreProvider:(id <HDProtectedResourceStoreProvider>)arg1;
- (void)setAlertSuppressionService:(id <HDNanoAlertSuppressionService>)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)unregisterProtectedResourceStoreProvider:(id <HDProtectedResourceStoreProvider>)arg1;

@end
