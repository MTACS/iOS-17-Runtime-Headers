
@interface WFContextualActionSpotlightSyncService : NSObject <CSSearchableIndexDelegate, FCActivityManagerObserving, MTAlarmDataSourceObserver, WFDatabaseObjectObserver> {
    NSObject<OS_os_activity> * _activity;
    MTAlarmDataSource * _alarmDataSource;
    LNAutoShortcutsProvider * _autoShortcutsProvider;
    VCDaemonDatabaseProvider * _databaseProvider;
    SwiftVCDaemonXPCEventHandler * _eventHandler;
    BPSSink * _focusModeSink;
    CSSearchableIndex * _index;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, retain) MTAlarmDataSource *alarmDataSource;
@property (nonatomic, readonly) LNAutoShortcutsProvider *autoShortcutsProvider;
@property (nonatomic, retain) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (nonatomic, readonly) BPSSink *focusModeSink;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (long long)contextualActionsIndexVersion;
+ (bool)didCompleteAppShortcutDomainMigration;
+ (void)setContextualActionsIndexVersion:(long long)arg1;
+ (void)setDidCompleteAppShortcutDomainMigration;

- (void).cxx_destruct;
- (id)activity;
- (id)alarmDataSource;
- (void)applicationWasRegistered:(id)arg1;
- (id)autoShortcutsProvider;
- (void)availableActivitiesDidChangeForManager:(id)arg1;
- (void)dataSourceDidReload:(id)arg1;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)databaseProvider;
- (void)dealloc;
- (id)eventHandler;
- (id)focusModeSink;
- (id)index;
- (void)indexAppShortcutsForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithEventHandler:(id)arg1 databaseProvider:(id)arg2;
- (void)migrateAppShortcutsAndReindexAllItemsIfNeeded;
- (id)queue;
- (void)queue_fetchWipeAndIndexActionsInDomainWithDescriptiveName:(id)arg1 identifiers:(id)arg2 fetcher:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)queue_getAlarmContextualActionsWithCompletionHandler:(id /* block */)arg1;
- (void)queue_getAppShortcutContextualActionsForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queue_getFocusModeContextualActionsWithCompletionHandler:(id /* block */)arg1;
- (void)queue_getStaticContextualActionsWithCompletionHandler:(id /* block */)arg1;
- (void)queue_getToggleSettingContextualActionsWithCompletionHandler:(id /* block */)arg1;
- (void)queue_wipeIndexIfNotMigratedToNewDomainIdentifiersWithCompletionHandler:(id /* block */)arg1;
- (void)receiveAutoShortcutsUpdatedNotification:(id)arg1;
- (void)reindexAllSearchableItemsIfNeeded:(bool)arg1;
- (void)reindexAllSearchableItemsWithCompletion:(id /* block */)arg1;
- (void)reindexSearchableItems:(unsigned long long)arg1;
- (void)reindexSearchableItems:(unsigned long long)arg1 appShortcutBundleIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)setAlarmDataSource:(id)arg1;
- (void)setDatabaseProvider:(id)arg1;
- (bool)shouldIndexToggles;
- (void)start;
- (void)subscribeToBiome;

@end
