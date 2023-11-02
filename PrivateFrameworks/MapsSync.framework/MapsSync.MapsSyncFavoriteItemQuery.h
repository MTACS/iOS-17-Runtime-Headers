
@interface MapsSync.MapsSyncFavoriteItemQuery : MapsSync.MapsSyncBaseQuery {
    void _hasDeletedExpired;
    void _specifiedQuery;
}

+ (id)signpostLog;

- (void).cxx_destruct;
- (void)fetchContents:(id /* block */)arg1;
- (void)fetchContentsWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchQueryContents:(id /* block */)arg1;
- (void)fetchQueryContentsWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)findDuplicates:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (id)initWithQueryDelegate:(id)arg1 predicate:(id)arg2;
- (id)mergeDuplicateObjectsWithDuplicates:(id)arg1;
- (void)preFetchHook:(id /* block */)arg1;

@end
