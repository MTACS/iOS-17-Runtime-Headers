
@interface BDSReadingHistoryServiceClient : NSObject <BDSBookWidgetReadingHistoryProviding, BDSReadingHistoryBackupServiceClient> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    NSHashTable * _observers;
    <BDSServiceProtocol> * _serviceProxy;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) <BDSServiceProtocol> *serviceProxy;

+ (void)clearDefaultsCachedDataWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedServiceProxy;

- (void).cxx_destruct;
- (void)_handleModelDidChange:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allObservers;
- (void)backupWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)bookWidgetReadingHistoryStateInfoWithCompletionHandler:(id /* block */)arg1;
- (void)clearDataWithCompletionHandler:(id /* block */)arg1;
- (void)clearDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearDefaultsCachedDataWithCompletionHandler:(id /* block */)arg1;
- (void)clearTodayWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)handleSyncFileChangeWithSyncVersionInfo:(id)arg1 updateInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)incrementWithDate:(id)arg1 by:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)listBackupWithCompletionHandler:(id /* block */)arg1;
- (id)observers;
- (void)readingHistoryStateInfoWithRangeStart:(id)arg1 rangeEnd:(id)arg2 currentTime:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removeObserver:(id)arg1;
- (void)restoreWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serviceProxy;
- (void)serviceStatusInfoWithCompletionHandler:(id /* block */)arg1;
- (void)setObservers:(id)arg1;

@end
