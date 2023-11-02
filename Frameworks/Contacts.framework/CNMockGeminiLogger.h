
@interface CNMockGeminiLogger : NSObject <CNGeminiLogger>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchBestResultForInteraction:(id)arg1 error:(id)arg2;
- (void)fetchSortedResultsForInteraction:(id)arg1 error:(id)arg2;
- (void)fetchedBestResult:(id)arg1 forInteraction:(id)arg2;
- (void)fetchedSortedResults:(id)arg1 forInteraction:(id)arg2;
- (void)fetchingBestResultForDestinationHandle:(id /* block */)arg1;
- (void)recordInteractionError:(id)arg1;
- (void)recordedInteraction:(id)arg1 forContext:(id)arg2;
- (void)registeredForContextUpdatesWithToken:(id)arg1;
- (void)unregisteredForContextUpdatesWithToken:(id)arg1;
- (void)updateSubscriptionInfoError:(id)arg1;
- (void)updatedSubscriptionInfo:(id)arg1;
- (void)updatingSubscriptionInfo:(id /* block */)arg1;

@end
