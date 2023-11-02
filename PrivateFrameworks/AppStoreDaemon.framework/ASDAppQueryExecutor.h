
@interface ASDAppQueryExecutor : NSObject {
    ASDDispatchQueue * _dispatchQueue;
    long long  _queryOptions;
    NSMutableDictionary * _queryPromises;
    ASDServiceBroker * _serviceBroker;
}

@property (nonatomic) long long queryOptions;

- (void).cxx_destruct;
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(id /* block */)arg3;
- (void)executeUpdatesQueryWithPredicateReloadingFromServer:(bool)arg1 onPairedDevice:(id)arg2 withResultHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithServiceBroker:(id)arg1;
- (long long)queryOptions;
- (void)setQueryOptions:(long long)arg1;

@end
