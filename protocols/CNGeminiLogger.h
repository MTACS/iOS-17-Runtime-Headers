
@protocol CNGeminiLogger <NSObject>

@required

- (void)fetchSortedResultsForInteraction:(CNGeminiInteraction *)arg1 error:(NSError *)arg2;
- (void)fetchedSortedResults:(NSArray *)arg1 forInteraction:(CNGeminiInteraction *)arg2;
- (void)fetchingBestResultForDestinationHandle:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)recordInteractionError:(NSError *)arg1;
- (void)recordedInteraction:(CNGeminiInteraction *)arg1 forContext:(CTXPCServiceSubscriptionContext *)arg2;
- (void)registeredForContextUpdatesWithToken:(id <CNGeminiUpdateRegistrationToken>)arg1;
- (void)unregisteredForContextUpdatesWithToken:(id <CNGeminiUpdateRegistrationToken>)arg1;
- (void)updateSubscriptionInfoError:(NSError *)arg1;
- (void)updatedSubscriptionInfo:(NSArray *)arg1;
- (void)updatingSubscriptionInfo:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*

@end
