
@interface NPTOLibraryInfo : NSObject {
    NPTOPreferencesAccessor * _legacyPreferencesAccessor;
    NSURL * _libraryURL;
    NPTONotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) NSDictionary *collectionTargetMap;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (getter=isSyncing, nonatomic) bool syncing;

- (void).cxx_destruct;
- (id)collectionTargetMap;
- (id)collectionTargetMapChangeObserverWithQueue:(id)arg1 block:(id /* block */)arg2;
- (id)initWithDevice:(id)arg1;
- (bool)isSyncNeeded;
- (bool)isSyncing;
- (id)lastUpdatedDate;
- (void)setCollectionTargetMap:(id)arg1;
- (void)setSyncNeeded;
- (void)setSyncing:(bool)arg1;
- (id)syncNeededChangeObserverWithQueue:(id)arg1 block:(id /* block */)arg2;
- (id)syncingChangeObserverWithQueue:(id)arg1 block:(id /* block */)arg2;

@end
