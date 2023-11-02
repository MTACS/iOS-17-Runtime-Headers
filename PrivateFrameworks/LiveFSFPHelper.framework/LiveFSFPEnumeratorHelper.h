
@interface LiveFSFPEnumeratorHelper : NSObject <NSFileProviderEnumerator> {
    bool  _addParent;
    LiveFSFPEnumeratorDataContainer * _dc;
    LiveFSFPItemHelper * _enumeratedItem;
    bool  _hasPersistentIDs;
    bool  _isDir;
    bool  _isVolumeWide;
    bool  _sortedByDate;
    int  _state;
    NSMutableSet * deletedItems;
    LiveFSFPExtensionHelper * ext;
    bool  historyReset;
    bool  isActive;
    unsigned int  postedSelfDelete;
    unsigned int  postedSelfUpdate;
    NSMutableSet * updatedItems;
}

@property bool addParent;
@property (readonly, retain) LiveFSFPEnumeratorDataContainer *dc;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) LiveFSFPItemHelper *enumeratedItem;
@property (readonly) bool hasPersistentIDs;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDir;
@property (readonly) bool isVolumeWide;
@property int state;
@property (readonly) Class superclass;

+ (void)applyParentUpdateAcrossEnumerators:(id)arg1;
+ (id)newWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)addInterestedItem:(id)arg1 newName:(id)arg2 forSelf:(bool)arg3;
- (bool)addParent;
- (void)applyDelete:(id)arg1 newTombstone:(id)arg2 toSelf:(bool)arg3;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (id)dc;
- (void)doShutdown;
- (id)ensureConnectedForUpdates;
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;
- (void)enumerateFileItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)enumeratedItem;
- (id)getDirContents;
- (id)getItemsFromTree:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 error:(id*)arg3;
- (bool)hasPersistentIDs;
- (id)initForExtension:(id)arg1 item:(id)arg2;
- (id)initWithEnumeratedItem:(id)arg1 container:(id)arg2 extension:(id)arg3;
- (void)invalidate;
- (bool)isDir;
- (bool)isVolumeWide;
- (void)reallyEnumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (void)resetHistory;
- (void)setAddParent:(bool)arg1;
- (void)setState:(int)arg1;
- (void)signalEnumeratedItemChanged;
- (int)state;
- (void)synchronizedEnumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;

@end
