
@interface TVRMSPairingRecordStore : NSObject {
    NSMutableDictionary * _pairingRecords;
}

+ (id)sharedRecordStore;

- (void).cxx_destruct;
- (void)_synchronizePreferences;
- (id)allPairingRecords;
- (id)init;
- (id)pairedServiceNetworkNames;
- (id)pairingRecordForServiceWithNetworkName:(id)arg1;
- (void)removePairingRecordForServiceWithNetworkName:(id)arg1;
- (void)savePairingRecord:(id)arg1 forServiceWithNetworkName:(id)arg2;

@end
