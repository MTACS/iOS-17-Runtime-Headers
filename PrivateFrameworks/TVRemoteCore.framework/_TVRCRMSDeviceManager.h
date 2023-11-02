
@interface _TVRCRMSDeviceManager : NSObject

+ (id)sharedInstance;

- (void)_addOrUpdateRecordInUserDefaults:(id)arg1;
- (id)_allRecords;
- (void)_performWithMutableRecords:(id /* block */)arg1;
- (void)_removeRecordWithNetworkNameFromUserDefaults:(id)arg1;
- (void)addStoredInfoForNetworkName:(id)arg1 displayName:(id)arg2 pairingGUID:(id)arg3;
- (id)pairingGUIDForNetworkName:(id)arg1;
- (void)removeStoredInfoForNetworkName:(id)arg1;

@end
