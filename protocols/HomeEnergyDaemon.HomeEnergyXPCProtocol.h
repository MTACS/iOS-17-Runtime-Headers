
@protocol HomeEnergyDaemon.HomeEnergyXPCProtocol

@required

- (void)disableAllNextCleanEnergyWindowNotificationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)disableEnergyForecastDataCollectionForGridID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)disableEnergyForecastDataCollectionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)disableNextCleanEnergyWindowNotificationsForGridID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)disableNextCleanEnergyWindowNotificationsForGridID:(void *)arg1 homeID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)dumpAllDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)enableEnergyForecastDataCollectionForGridID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)enableNextCleanEnergyWindowNotificationsForGridID:(void *)arg1 notificationContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)energyWindowsFor:(void *)arg1 withCaching:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)energyWindowsForGridID:(void *)arg1 fromDate:(void *)arg2 endDate:(void *)arg3 withCaching:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSDate *, NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)gridIDLookupWithCoordinate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)isNextCleanEnergyWindowNotificationEnabledForGridID:(void *)arg1 homeID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)testDelegateForGridIds:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)testNotificationsForGridID:(void *)arg1 notificationContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)testSetMockURLSessionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)useMockDataWithFilePath:(void *)arg1 disableMock:(void *)arg2 validityDate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: NSString *, bool, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
