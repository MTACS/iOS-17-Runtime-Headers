
@interface _CNGeminiLogger : NSObject <CNGeminiLogger> {
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchSortedResultsForInteraction:(id)arg1 error:(id)arg2;
- (void)fetchedSortedResults:(id)arg1 forInteraction:(id)arg2;
- (void)fetchingBestResultForDestinationHandle:(id /* block */)arg1;
- (id)init;
- (id)log;
- (void)recordInteractionError:(id)arg1;
- (void)recordedInteraction:(id)arg1 forContext:(id)arg2;
- (void)registeredForContextUpdatesWithToken:(id)arg1;
- (void)unregisteredForContextUpdatesWithToken:(id)arg1;
- (void)updateSubscriptionInfoError:(id)arg1;
- (void)updatedSubscriptionInfo:(id)arg1;
- (void)updatingSubscriptionInfo:(id /* block */)arg1;

@end
