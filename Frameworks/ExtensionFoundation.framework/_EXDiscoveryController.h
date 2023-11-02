
@interface _EXDiscoveryController : NSObject <LSObserverDelegate> {
    NSMutableDictionary * _activeQueries;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeQueriesLock;
    LSObserver * _observer;
    NSObject<OS_dispatch_queue> * _queryQueue;
    id  _settingsStoreToken;
}

@property (retain) NSMutableDictionary *activeQueries;
@property struct os_unfair_lock_s { unsigned int x1; } activeQueriesLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) LSObserver *observer;
@property (retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain) id settingsStoreToken;
@property (readonly) Class superclass;

+ (bool)canRunQuery:(id)arg1 error:(id*)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)activeQueries;
- (struct os_unfair_lock_s { unsigned int x1; })activeQueriesLock;
- (void)addActiveQueryObserver:(id)arg1 query:(id)arg2;
- (id)extensionsMatchingQueries:(id)arg1;
- (id)extensionsMatchingQuery:(id)arg1;
- (id)init;
- (id)observer;
- (void)observerDidObserveDatabaseChange:(id)arg1;
- (void)observerDidObserveSettingsChange;
- (id)queryQueue;
- (void)removeActiveQueryObserver:(id)arg1 query:(id)arg2;
- (void)setActiveQueries:(id)arg1;
- (void)setActiveQueriesLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setObserver:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setSettingsStoreToken:(id)arg1;
- (id)settingsStoreToken;

@end
