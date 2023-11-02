
@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _inactiveInstalls;
    NSObject<OS_dispatch_queue> * _installControlsQueue;
    NSMutableDictionary * _installIndexes;
    NSMutableDictionary * _installTypes;
    NSArray * _journalledNotificationsToReplay;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSMutableOrderedSet * _orderedInstalls;
    NSMutableDictionary * _progressProportions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressProportionsLock;
    NSObject<OS_dispatch_source> * _progressProportionsSaveTimerSource;
    LSInstallProgressList * _progresses;
    NSMutableSet * _publishingStrings;
    bool  _replayingJournalToNewClients;
    NSMutableArray * _startupJournalledNotifications;
    bool  _usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginListening;
+ (int)notificationTypeForOperation:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_LSFindPlaceholderApplications;
- (void)_placeholderIconUpdatedForApp:(id)arg1;
- (void)_placeholdersUninstalled:(id)arg1;
- (id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(bool)arg3;
- (void)addObserver:(id)arg1;
- (void)addSendNotificationFenceWithTimeout:(double)arg1 fenceBlock:(id /* block */)arg2;
- (void)coalesceProportionsSave;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(id /* block */)arg4;
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserver:(id)arg3;
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserverProxy:(id)arg3;
- (void)discardProportionsForBundleID:(id)arg1;
- (void)dispatchJournalledNotificationsToConnectedClients;
- (void)dispatchJournalledNotificationsToObserver:(id)arg1;
- (unsigned long long)finalInstallPhaseForAppProxy:(id)arg1;
- (void)getMaxProgressPhaseUnitsForLoading:(int*)arg1 restoring:(int*)arg2 installing:(int*)arg3 essentialAssets:(int*)arg4 forAppProxy:(id)arg5;
- (id)init;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)installationFailedForApplication:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)loadJournalledNotificationsFromDisk;
- (void)loadProportions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (SEL)observerSelectorForNotification:(int)arg1;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(bool)arg3;
- (void)performJournalRecovery;
- (id)progressProportionsForBundleID:(id)arg1;
- (void)rebuildInstallIndexes;
- (void)removeObserver:(id)arg1;
- (void)restoreInactiveInstalls;
- (void)saveProportions;
- (void)sendDatabaseRebuiltNotification;
- (void)sendDatabaseRebuiltNotificationToObserver:(id)arg1;
- (void)sendNetworkUsageChangedNotification;
- (void)sendNotification:(id)arg1 ForPlugins:(id)arg2;
- (void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(bool)arg3 completion:(id /* block */)arg4;
- (void)sendNotification:(id)arg1 forApplicationExtensionRecords:(id)arg2;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(bool)arg3 completion:(id /* block */)arg4;
- (void)setProgressProportionsByPhase:(id)arg1 forInstallOfApplicationWithIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
