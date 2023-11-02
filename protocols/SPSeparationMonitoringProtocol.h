
@protocol SPSeparationMonitoringProtocol <NSObject>

@required

- (void)activeCompanionWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)addSafeLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SPSafeLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)assignSafeLocation:(void *)arg1 beaconUUIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)assignSafeLocation:(void *)arg1 to:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)beaconsToMonitorForSeparation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)disableSeparationMonitoringForBeacon:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)disableSeparationMonitoringForBeacons:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)enableSeparationMonitoringForBeacon:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)enableSeparationMonitoringForBeacons:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchSeparationMonitoringStatus:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)forceLOIBasedSafeLocationRefresh:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)publishSeparationEventForBeacons:(void *)arg1 eventType:(void *)arg2 region:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSSet *, long long, CLCircularRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeSafeLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)safeLocationsForSeparationMonitoring:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)startRefreshingBeaconsForSeparationMonitoringWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)startRefreshingSafeLocationWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)startRefreshingSeparationMonitoringState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)stopRefreshingBeaconsForSeparationMonitoringWithBlock;
- (void)stopRefreshingSafeLocations;
- (void)stopRefreshingSeparationMonitoringState;
- (void)unassignSafeLocation:(void *)arg1 beaconUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unassignSafeLocation:(void *)arg1 beaconUUIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateSafeLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SPSafeLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
