
@interface QLFPItemFetcher : QLUbiquitousItemFetcher <FPItemCollectionDelegate> {
    QLURLHandler * _fetchedURLHandler;
    FPItem * _fpItem;
    FPItemCollection * _itemCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerItemCollectionIfNeeded;
- (void)_unregisterItemCollectionIfNeeded;
- (void)_urlHandler:(id /* block */)arg1;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* block */)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFPItem:(id)arg1 shouldZipPackageIfNeeded:(bool)arg2;
- (bool)isLongFetchOperation;
- (id)itemSize;
- (void)prepareShareableItem:(id /* block */)arg1;
- (id)shareableItem;

@end
