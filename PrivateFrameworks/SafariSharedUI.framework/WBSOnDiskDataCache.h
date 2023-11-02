
@interface WBSOnDiskDataCache : NSObject <WBSDataCache> {
    NSURL * _cacheDirectoryURL;
    NSMutableDictionary * _cacheSettings;
    WBSCoalescedAsynchronousWriter * _cacheSettingsWriter;
    <WBSDataCacheDelegate> * _dataCacheDelegate;
    NSObject<OS_dispatch_queue> * _diskAccessQueue;
    NSCache * _entriesForKeyStringsCache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isInMemoryCacheEnabled;
    NSMutableSet * _missingEntryKeyStrings;
    NSMutableSet * _pendingKeyStringRequests;
    bool  _terminating;
}

@property (nonatomic, readonly) NSURL *cacheDirectoryURL;
@property (nonatomic) <WBSDataCacheDelegate> *dataCacheDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInMemoryCacheEnabled;
@property (readonly) Class superclass;
@property (getter=isTerminating, nonatomic, readonly) bool terminating;

- (void).cxx_destruct;
- (id)_cacheSettingsFileURL;
- (void)_didFailToLoadEntryForKeyString:(id)arg1 error:(id)arg2;
- (void)_didLoadEntry:(id)arg1 forKeyString:(id)arg2;
- (id)_diskAccessQueueName;
- (void)_dispatchDiskAccessBlock:(id /* block */)arg1;
- (id)_fileLocationForKeyString:(id)arg1;
- (long long)_internalEntryStateForKeyString:(id)arg1;
- (void)_internalQueueDispatchAsync:(id /* block */)arg1;
- (void)_internalQueueDispatchSync:(id /* block */)arg1;
- (id)_internalQueueName;
- (void)_notifyDidFinishSettingUp;
- (id)cacheDirectoryURL;
- (id)dataCacheDelegate;
- (long long)entryStateForKeyString:(id)arg1;
- (void)getEntryURLForKeyString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithCacheDirectoryURL:(id)arg1;
- (bool)isInMemoryCacheEnabled;
- (bool)isTerminating;
- (void)removeEntriesForKeyStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeEntriesForKeyStringsNotIncludedIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestEntryForKeyString:(id)arg1;
- (void)reset;
- (void)savePendingChangesBeforeTearDown;
- (void)setDataCacheDelegate:(id)arg1;
- (void)setEntry:(id)arg1 forKeyString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setIsInMemoryCacheEnabled:(bool)arg1;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (void)setUp;
- (id)settingForKey:(id)arg1;

@end
