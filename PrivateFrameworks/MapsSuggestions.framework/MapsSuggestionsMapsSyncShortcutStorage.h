
@interface MapsSuggestionsMapsSyncShortcutStorage : NSObject <MapsSuggestionsShortcutStorage, MapsSync.MapsSyncDataQueryDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _changeHandler;
    bool  _editing;
    bool  _hasAttemptedLoadingContents;
    NSLock * _lock;
    _TtC8MapsSync25MapsSyncFavoriteItemQuery * _query;
    NSArray * _queryContents;
    geo_isolater * _queryIsolator;
    bool  _willNotify;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (nonatomic) bool hasAttemptedLoadingContents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _TtC8MapsSync25MapsSyncFavoriteItemQuery *query;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic) bool willNotify;

- (void).cxx_destruct;
- (bool)addOrUpdateShortcuts:(id)arg1 handler:(id /* block */)arg2;
- (id)callbackQueue;
- (bool)editing;
- (bool)hasAttemptedLoadingContents;
- (id)init;
- (bool)loadAllShortcutsWithHandler:(id /* block */)arg1;
- (bool)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(id /* block */)arg3;
- (bool)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(id /* block */)arg3;
- (bool)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(id /* block */)arg3;
- (bool)moveShortcutToBack:(id)arg1 handler:(id /* block */)arg2;
- (bool)moveShortcutToFront:(id)arg1 handler:(id /* block */)arg2;
- (id)query;
- (void)queryContentsDidChangeWithQuery:(id)arg1;
- (bool)removeShortcuts:(id)arg1 handler:(id /* block */)arg2;
- (void)setCallbackQueue:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHasAttemptedLoadingContents:(bool)arg1;
- (void)setWillNotify:(bool)arg1;
- (id)uniqueName;
- (bool)willNotify;

@end
