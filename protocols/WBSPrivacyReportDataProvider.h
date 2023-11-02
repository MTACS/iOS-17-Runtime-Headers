
@protocol WBSPrivacyReportDataProvider <NSObject>

@required

- (NSArray *)blockedKnownTrackers;
- (bool)hasData;
- (NSArray *)knownTrackers;
- (NSArray *)knownTrackersSortDescriptors;
- (void)loadDataFromStartDate:(void *)arg1 toEndDate:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)loadDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (WBSKnownTrackingThirdParty *)mostSeenKnownTracker;
- (NSArray *)preventedKnownTrackers;
- (double)ratioOfTrackedFirstPartiesToAllVisited;
- (void)setKnownTrackersSortDescriptors:(NSArray *)arg1;
- (void)setTrackedFirstPartiesSortDescriptors:(NSArray *)arg1;
- (NSArray *)trackedFirstParties;
- (NSArray *)trackedFirstPartiesSortDescriptors;
- (NSSet *)trackerOwnerNames;

@end
