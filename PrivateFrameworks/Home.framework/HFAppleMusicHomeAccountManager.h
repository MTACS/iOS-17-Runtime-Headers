
@interface HFAppleMusicHomeAccountManager : NSObject {
    NSObject<OS_dispatch_queue> * _concurrentQueryQueue;
    NSObject<OS_dispatch_queue> * _dataModelUpdateQueue;
    NSMutableDictionary * _homeIdentifierToActiveAMSQueriesMapping;
    NSMutableDictionary * _homeIdentifierToFuturePromiseMapping;
    NSMutableDictionary * _homeIdentifierToMediaAccountMapping;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueryQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataModelUpdateQueue;
@property (nonatomic, retain) NSMutableDictionary *homeIdentifierToActiveAMSQueriesMapping;
@property (nonatomic, retain) NSMutableDictionary *homeIdentifierToFuturePromiseMapping;
@property (nonatomic, retain) NSMutableDictionary *homeIdentifierToMediaAccountMapping;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchMediaAccountForHome:(id)arg1;
- (void)_finishPendingPromisesWithMediaAccountInfo:(id)arg1 forHome:(id)arg2;
- (id)_futureForQueryLimitForHome:(id)arg1;
- (void)applicationWillEnterForeground;
- (id)concurrentQueryQueue;
- (id)dataModelUpdateQueue;
- (void)executeHomeMediaAccountFetchForAllHomes;
- (id)executeHomeMediaAccountFetchForHome:(id)arg1;
- (void)getHomeMediaAccountForHome:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)homeIdentifierToActiveAMSQueriesMapping;
- (id)homeIdentifierToFuturePromiseMapping;
- (id)homeIdentifierToMediaAccountMapping;
- (id)init;
- (id)mediaAccountForHomeIdentifier:(id)arg1;
- (void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2 completion:(id /* block */)arg3;
- (void)setConcurrentQueryQueue:(id)arg1;
- (void)setDataModelUpdateQueue:(id)arg1;
- (void)setHomeIdentifierToActiveAMSQueriesMapping:(id)arg1;
- (void)setHomeIdentifierToFuturePromiseMapping:(id)arg1;
- (void)setHomeIdentifierToMediaAccountMapping:(id)arg1;

@end
