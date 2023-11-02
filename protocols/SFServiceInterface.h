
@protocol SFServiceInterface

@required

- (void)createSnapshotFor:(void *)arg1 pred:(void *)arg2 actions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSPredicate *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)donateBiomeEventForEdgeSelectionWithPrefix:(void *)arg1 interfaceType:(void *)arg2 radioType:(void *)arg3 radioBand:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getOption:(void *)arg1 inScopes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getPreferCellOverWiFiWithOptions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)identifierForUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)inquireNOIFor:(void *)arg1 orPredicate:(void *)arg2 requestedKeys:(void *)arg3 options:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NWNetworkOfInterest *, NSPredicate *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performActionWithOptions:(void *)arg1 inScopes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performAppEndpointTrackingPeriodicTasksWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performAppExperiencePeriodicTasksWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performAppPeriodicTasksWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performAppTrackingPeriodicTasksWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performPersistentStoreHealthCheckWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performQueryOnEntity:(void *)arg1 fetchRequestProperties:(void *)arg2 pred:(void *)arg3 sort:(void *)arg4 actions:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: NSString *, FetchRequestPropertiesDescriptor *, NSPredicate *, NSSortDescriptor *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)performQueryOnEntity:(void *)arg1 pred:(void *)arg2 sort:(void *)arg3 actions:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSPredicate *, NSSortDescriptor *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resetDataFor:(void *)arg1 nameKind:(void *)arg2 inScopes:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resetUsageFor:(void *)arg1 nameKind:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)retrieveActivityMetrics:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setOption:(void *)arg1 inScopes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setPreferCellOverWiFiWithOptions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setUsageOption:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)subscribeToNOIsFor:(NWNetworkOfInterest *)arg1 orPredicate:(NSPredicate *)arg2 options:(NSDictionary *)arg3;
- (void)trainModelAndScore:(void *)arg1 lastScoreDate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: bool, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)unsubscribeToNOIs:(NSSet *)arg1;

@end
