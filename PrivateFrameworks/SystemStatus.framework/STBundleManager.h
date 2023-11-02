
@interface STBundleManager : NSObject {
    NSSet * _allowedBundleRecordIdentifiers;
    Class  _bundleRecordClass;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSArray * _directoryURLs;
    NSObject<BSDefaultObserver> * _internalDefaultsObserver;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _queue_allBundleRecordsByIdentifier;
    bool  _queue_ignoreAllowList;
    NSHashTable * _queue_observers;
}

@property (nonatomic, readonly) Class bundleRecordClass;
@property (nonatomic, readonly, copy) NSSet *recordIdentifiers;

+ (id)_defaultBundleRecordDirectoriesForClass:(Class)arg1;
+ (id)_defaultBundleRecordIdentifierAllowListForClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_initWithBundleRecordClass:(Class)arg1 directoryURLs:(id)arg2 allowedBundleRecordIdentifiers:(id)arg3;
- (id)_queue_loadAllBundleRecords;
- (void)_queue_prepareInternalPreferences;
- (void)_queue_registerForInternalPreferenceChanges;
- (void)_queue_runBlockOnObservers:(id /* block */)arg1;
- (void)_queue_setIgnoreAllowedList:(bool)arg1;
- (void)_queue_unregisterForInternalPreferenceChanges;
- (void)_queue_updateAllBundleRecords;
- (void)_queue_updateAllBundleRecordsForAllBundleRecords:(id)arg1;
- (void)addObserver:(id)arg1;
- (Class)bundleRecordClass;
- (id)bundleRecordForRecordIdentifier:(id)arg1;
- (id)initWithBundleRecordClass:(Class)arg1;
- (id)recordIdentifiers;
- (void)removeObserver:(id)arg1;

@end
