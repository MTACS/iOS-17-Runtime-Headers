
@protocol SPOwnerSessionPrivateProtocol <SPOwnerSessionProtocol>

@required

- (void)allObservationsForBeacon:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)beaconForUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)beaconStoreStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)fakeClassicPairingWithMACAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceDistributeKeysWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceKeySyncForBeaconUUID:(void *)arg1 lastObservationDate:(void *)arg2 lastObservationIndex:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceUpdateKeyAlignmentRecordForUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceUpdateKeyMapsForUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id /* block */)maintainedBeaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSSet *, void*, id, SEL
- (id /* block */)maintainedUnknownBeaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSSet *, void*, id, SEL
- (void)rawSearchResultsForBeacon:(void *)arg1 dateInterval:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SPBeacon *, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)registerDarwinNotificationName:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)requestLiveLocationForFriend:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)requestLiveLocationForUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)sendRegisterIntentWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)sendUnregisterIntentWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setMaintainedBeaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)setMaintainedUnknownBeaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)unregisterDarwinNotificationName:(NSString *)arg1;
- (void)waitForBeaconStoreAvailableWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
