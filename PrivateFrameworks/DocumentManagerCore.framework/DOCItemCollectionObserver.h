
@interface DOCItemCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate> {
    NSMutableArray * _delegates;
    FPItemCollection * _itemCollection;
    <FPItemCollectionIndexPathBasedDelegate> * _soleUpdatableDelegate;
    NSMutableArray * _subscribers;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) FPItemCollection *itemCollection;
@property (retain) <FPItemCollectionIndexPathBasedDelegate> *soleUpdatableDelegate;
@property (retain) NSMutableArray *subscribers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)__delegates;
- (void)_enumerateItemCollectionIndexPathBasedDelegatesWithBlock:(id /* block */)arg1;
- (void)_purgeOrphanedContainers;
- (void)addItemCollectionDelegate:(id)arg1;
- (id)addSubscriber:(id /* block */)arg1;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* block */)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)dealloc;
- (id)delegates;
- (id)initWithItemCollection:(id)arg1;
- (id)itemCollection;
- (void)notifySubscribers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeItemCollectionDelegate:(id)arg1;
- (void)removeSubscriber:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setItemCollection:(id)arg1;
- (void)setSoleUpdatableDelegate:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (id)soleUpdatableDelegate;
- (id)subscribers;

@end
