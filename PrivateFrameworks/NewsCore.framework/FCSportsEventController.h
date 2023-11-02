
@interface FCSportsEventController : NSObject <FCJSONEncodableObjectProviding, FCSportsEventsFetchOperationDelegate> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    <FCContentContext> * _context;
    NSCache * _fastCache;
    FCSportsEventRecordSource * _sportsEventRecordSource;
    FCTagController * _tagController;
    FCTagRecordSource * _tagRecordSource;
}

@property (nonatomic, retain) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, retain) <FCContentContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fastCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCSportsEventRecordSource *sportsEventRecordSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagController *tagController;
@property (nonatomic, retain) FCTagRecordSource *tagRecordSource;

- (void).cxx_destruct;
- (id)_cachedSportsEventForSportsEventID:(id)arg1 fastCacheOnly:(bool)arg2;
- (id)_cachedSportsEventsForSportsEventID:(id)arg1 fastCacheOnly:(bool)arg2;
- (id)_fetchOperationForSportsEventsWithIDs:(id)arg1;
- (void)_fetchSportsEventForSportsEventID:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchSportsEventsForSportsEventIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_refreshSportsEventsBasedOnAgeForSportsEventIDs:(id)arg1;
- (void)_saveSportsEventsToCache:(id)arg1;
- (id)appConfigurationManager;
- (id)context;
- (id)fastCache;
- (id)fastCachedSportsEventForID:(id)arg1;
- (void)fetchSportsEventForSportsEventID:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchSportsEventsForSportsEventIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithContentDatabase:(id)arg1 context:(id)arg2 sportsEventRecordSource:(id)arg3 tagController:(id)arg4;
- (id)jsonEncodableObject;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFastCache:(id)arg1;
- (void)setSportsEventRecordSource:(id)arg1;
- (void)setTagController:(id)arg1;
- (void)setTagRecordSource:(id)arg1;
- (id)slowCachedSportsEventForID:(id)arg1;
- (id)sportsEventRecordSource;
- (void)sportsEventsFetchOperation:(id)arg1 didFetchSportsEvents:(id)arg2;
- (id)tagController;
- (id)tagRecordSource;

@end
