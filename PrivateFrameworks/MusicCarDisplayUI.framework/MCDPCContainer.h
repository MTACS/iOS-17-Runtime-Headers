
@interface MCDPCContainer : NSObject {
    struct { 
        unsigned int didInvalidateRootItem : 1; 
        unsigned int didInvalidateIndicies : 1; 
        unsigned int willChangeCount : 1; 
        unsigned int didChangeCount : 1; 
    }  __supportedDelegateCalls;
    long long  _cachedCount;
    NSMutableDictionary * _cachedIndiciesByIdentifier;
    NSMutableDictionary * _cachedItemsByIndicies;
    <MCDPCContainerDelegate> * _delegate;
    NSString * _identifier;
    NSIndexPath * _indexPath;
    MCDPCModel * _model;
    MCDPCItem * _rootItem;
    NSObject<OS_dispatch_queue> * _serialAccessContainerQueue;
    bool  _showPlaybackProgress;
}

@property (nonatomic, readonly) NSString *appTitle;
@property (nonatomic) long long cachedCount;
@property (nonatomic, retain) NSMutableDictionary *cachedIndiciesByIdentifier;
@property (nonatomic, retain) NSMutableDictionary *cachedItemsByIndicies;
@property (nonatomic) <MCDPCContainerDelegate> *delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) MCDPCModel *model;
@property (nonatomic, readonly) MCDPCItem *rootItem;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialAccessContainerQueue;
@property (nonatomic, readonly) long long showCurrentlyPlayingIndex;
@property (nonatomic, readonly) bool showPlaybackProgress;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)_contentItemsUpdated:(id)arg1;
- (id)_initWithModel:(id)arg1 rootItem:(id)arg2 indexPath:(id)arg3;
- (void)_nowPlayingIdentifiersDidChange:(id)arg1;
- (id)appTitle;
- (void)beginLoadingItem:(id)arg1 completion:(id /* block */)arg2;
- (void)beginLoadingItemWithCompletion:(id /* block */)arg1;
- (long long)cachedCount;
- (id)cachedIndexByIdentifier:(id)arg1;
- (id)cachedIndiciesByIdentifier;
- (id)cachedItemForIdentifier:(id)arg1;
- (id)cachedItemForIndex:(long long)arg1;
- (id)cachedItemsByIndicies;
- (id)containerAtIndex:(long long)arg1;
- (id)containerForItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)fetchContentWithCompletion:(id /* block */)arg1;
- (void)getChildrenInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completion:(id /* block */)arg2;
- (void)getCountOfChildrenWithCompletion:(id /* block */)arg1;
- (void)getNowPlayingIdentifiersWithCompletion:(id /* block */)arg1;
- (void)getPlaybackProgressSupportForChildrenWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)indexPath;
- (void)invalidate;
- (bool)isValidForRefreshedParent:(id)arg1;
- (id)model;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (id)rootItem;
- (id)serialAccessContainerQueue;
- (void)setCachedCount:(long long)arg1;
- (void)setCachedIndiciesByIdentifier:(id)arg1;
- (void)setCachedItemsByIndicies:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSerialAccessContainerQueue:(id)arg1;
- (void)setShowPlaybackProgress:(bool)arg1;
- (long long)showCurrentlyPlayingIndex;
- (bool)showPlaybackProgress;
- (id)title;
- (void)updateRootItemWithCompletion:(id /* block */)arg1;

@end
