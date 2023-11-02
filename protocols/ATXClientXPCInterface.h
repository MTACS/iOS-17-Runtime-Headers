
@protocol ATXClientXPCInterface

@required

- (void)approvedSiriKitIntentsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)generateNewAppPredictionsForConsumerSubType:(void *)arg1 intent:(void *)arg2 candidateBundleIdentifiers:(void *)arg3 candidateIntentTypeIdentifiers:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: unsigned char, INIntent *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getAppPredictorAssetMappingDescriptionWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)getWebsitePredictionsForContextType:(void *)arg1 limit:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(NSString *)arg1 contextType:(NSString *)arg2;
- (void)sendFeedbackForConsumerType:(void *)arg1 consumerSubType:(void *)arg2 atxResponse:(void *)arg3 engagementType:(void *)arg4 engagedBundleId:(void *)arg5 bundleIdsShown:(void *)arg6 explicitlyRejectedBundleIds:(void *)arg7 reply:(void *)arg8; // needs 8 arg types, found 13: unsigned long long, unsigned char, ATXResponse *, unsigned long long, NSString *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)shouldPredictAppBundleId:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)shouldPredictBundleIdForShortcuts:(void *)arg1 action:(void *)arg2 forPrimaryShortcuts:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sortAppsByLaunches:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
