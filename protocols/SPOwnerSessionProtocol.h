
@protocol SPOwnerSessionProtocol <NSObject>

@required

- (NSSet *)allBeacons;
- (void)allBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (id /* block */)beaconAddedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPBeacon *, void*, id, SEL
- (void)beaconForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, NSError *, void*
- (void)beaconGroupForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeaconGroup *, NSError *, void*
- (void)beaconGroupsForUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (id /* block */)beaconRemovedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPBeacon *, void*, id, SEL
- (void)beaconingIdentifierForMACAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (id /* block */)beaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (void)clientConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)connectUsingMACAddress:(void *)arg1 longTermKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disableUTAppAlert:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disconnectFromMACAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (FMFuture *)executeCommand:(SPCommand *)arg1;
- (void)executeCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (FMFuture *)executeUTPlaySoundCommand:(SPCommand *)arg1;
- (void)fetchFindMyNetworkStatusForMACAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchUnauthorizedEncryptedPayload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (void)isUTAppAlertDisabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id /* block */)latestLocationsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (void)locationForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SPLocationFetchContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPLocationFetchResult *, NSError *, void*
- (NSSet *)locationSources;
- (void)locationsForBeacons:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (SPOwnerSessionState *)ownerSessionState;
- (id /* block */)ownerSessionStateUpdatedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPOwnerSessionState *, void*, id, SEL
- (void)readAISMetadataFromBeaconIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPDiscoveredAccessoryMetadata *, NSError *, void*
- (void)readAISMetadataFromMACAddress:(void *)arg1 useOwnerControlPoint:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPDiscoveredAccessoryMetadata *, NSError *, void*
- (void)readRawAISMetadataFromBeaconIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPRawAccessoryMetadata *, NSError *, void*
- (void)readRawAISMetadataFromMACAddress:(void *)arg1 useOwnerControlPoint:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPRawAccessoryMetadata *, NSError *, void*
- (void)removeBeacon:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPBeacon *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBeaconAddedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)setBeaconRemovedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)setBeaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setFindMyNetworkStatusForMACAddress:(void *)arg1 status:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setInvalidationBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setLatestLocationsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setLocationSources:(NSSet *)arg1;
- (void)setLocationUpdateBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPLocationFetchResult *, void*
- (void)setOwnerSessionStateUpdatedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPOwnerSessionState *, void*
- (void)simulateAccessoryPairing:(void *)arg1 name:(void *)arg2 isAirPods:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)standaloneBeaconsForUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)startRefreshing;
- (void)startRefreshingBeacons:(NSArray *)arg1;
- (void)startUpdatingApplicationBeaconsWithContext:(void *)arg1 collectionDifference:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 15: SPSimpleBeaconContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOrderedCollectionDifference *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, NSError *, void*
- (void)stopRefreshing;
- (void)stopUpdatingApplicationBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)subscribeAndFetchLocationForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPLocationFetchContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unacceptedBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)unknownBeaconsForUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)unsubscribeLocationUpdatesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateBatteryStatus:(void *)arg1 beaconUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned char, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateBeaconObservations:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
