
@interface FPSearchQueryEnumerator : NSObject <NSFileProviderEnumerator> {
    NSFileProviderSearchQuery * _fileProviderSearchQuery;
    NSString * _mountPoint;
    CSSearchQuery * _searchQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSearchQuery;
- (id)_fpItemsFromSearchableItems:(id)arg1;
- (void)_gatherItemsWithCompletionBlock:(id /* block */)arg1;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initWithSearchQuery:(id)arg1 mountPoint:(id)arg2;
- (void)invalidate;

@end
