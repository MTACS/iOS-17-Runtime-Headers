
@interface MapsSync.MapsSyncReviewedPlaceQuery : MapsSync.MapsSyncBaseQuery {
    void _specifiedQuery;
}

+ (id)signpostLog;

- (void).cxx_destruct;
- (void)fetchContents:(id /* block */)arg1;
- (void)fetchContentsWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchQueryContents:(id /* block */)arg1;
- (void)fetchQueryContentsWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (id)initWithQueryDelegate:(id)arg1 predicate:(id)arg2;

@end
