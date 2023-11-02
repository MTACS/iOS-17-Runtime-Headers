
@interface CPSClipCleanupManager : NSObject <LSApplicationWorkspaceObserverProtocol, RBSTerminationAssertionObserving> {
    NSMutableDictionary * _clipDeletionPromisesByBundleIDs;
    NSObject<OS_os_transaction> * _deletionTransaction;
    NSMutableDictionary * _pendingTerminationAssertionsByBundleIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_parentBundleIDsFromAppRecord:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_allAppClipsForPlaceholderOnly:(bool)arg1;
- (void)_applicationsDidChange:(id)arg1 operationHandler:(id /* block */)arg2;
- (void)_deleteClipWhenBackgrounded:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_didReceiveApplicationChangedNotification:(id)arg1 operationHandler:(id /* block */)arg2;
- (void)_didReceiveApplicationRegisteredNotification:(id)arg1;
- (void)_didReceiveApplicationUnregisteredNotification:(id)arg1;
- (void)_didReceiveMCSettingsChangedNotification:(id)arg1;
- (void)_handleNewInstalledAppWithBundleID:(id)arg1;
- (void)_handleNewUninstalledAppWithBundleID:(id)arg1;
- (void)_registerDistributedNotificationHandler;
- (void)_registerLocalNotifications;
- (void)_removeClipCancellingPendingRemovalIfNeeded:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_shouldDeleteClipWithRecord:(id)arg1 parentRecord:(id)arg2;
- (void)_transferTCCPermissionsFromClipWithBundleID:(id)arg1 toParentAppWithBundleID:(id)arg2;
- (void)_uninstallClipWithBundleIdentifier:(id)arg1 deletionPromise:(id)arg2;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)assertionTargetProcessDidExit:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeClipsByUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeFailedClipInstallsWithCompletionHandler:(id /* block */)arg1;
- (void)uninstallClipsWithParentAppInstalledWithCompletionHandler:(id /* block */)arg1;

@end
