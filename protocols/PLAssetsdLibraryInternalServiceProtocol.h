
@protocol PLAssetsdLibraryInternalServiceProtocol <NSObject>

@required

- (void)applyGraphUpdates:(void *)arg1 supportingData:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)applySearchIndexUpdates:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)assetsArePendingForDuplicateMergeProcessing:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, NSDictionary *, void*
- (void)deleteiTunesSyncedContentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)forceRunBackgroundJobsOnLibraryPath:(void *)arg1 criteriaShortCode:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getAssetCountsWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, NSError *, void*
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getBackgroundJobServiceStateWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getBackgroundJobServiceStatusCenterDumpWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getLibrarySizesFromDB:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (void)getSearchIndexProgressWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool, double, void*
- (void)getSearchIndexRebuildInfoWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, double, void*
- (void)getSizeOfResourcesToUploadByCPLWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, long long, NSError *, void*
- (void)invalidateBehavioralScoreOnAllAssetsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)mergeDuplicateAssetUuidSelection:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)metricsForLibraryAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)processIdenticalDuplicatesWithProcessingType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)reloadMomentGenerationOptions;
- (void)repairMemoriesWithUUIDs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetLimitedLibraryAccessForApplication:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setAssetKeywords:(void *)arg1 forAssetUUID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setFetchFilterWithAssets:(void *)arg1 forApplication:(void *)arg2 withAuditToken:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, struct { unsigned int x1[8]; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setWidgetTimelineGeneratedForDisplaySize:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateAssetLocationDataWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)waitForSearchIndexExistenceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
