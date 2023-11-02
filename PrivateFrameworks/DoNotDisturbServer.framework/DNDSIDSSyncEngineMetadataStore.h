
@interface DNDSIDSSyncEngineMetadataStore : NSObject <DNDSIDSSyncEngineMetadataStoring> {
    double  _deviceObsoletionDuration;
    NSMutableSet * _initialSyncPairedDeviceIdentifiers;
    NSMutableDictionary * _recordIDSyncDatesByPairedDeviceIdentifier;
    NSMutableDictionary * _recordMetadataByRecordID;
    double  _tombstoneObsoletionDuration;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_areSyncDatesValidAtDate:(id)arg1;
- (bool)_canTombstoneBeRemovedWithRecordID:(id)arg1;
- (void)_forgetMetadataForRecordID:(id)arg1;
- (void)_forgetObsoleteTombstones;
- (void)_forgetRecordID:(id)arg1;
- (void)_forgetSyncDatesForDevicesWithoutInitialSync;
- (void)_forgetSyncDatesForOutdatedDevices;
- (void)_forgetSyncDatesForRecordID:(id)arg1;
- (bool)_isMetadataValidAtDate:(id)arg1;
- (bool)_isPairedDeviceOutdated:(id)arg1;
- (void)_parseDictionary:(id)arg1;
- (void)_read;
- (void)_write;
- (id)deletedRecordIDsForPairedDeviceIdentifier:(id)arg1;
- (void)garbageCollect;
- (bool)hasMetadataForPairedDeviceIdentifier:(id)arg1;
- (bool)hasPerformedInitialSyncForPairedDeviceIdentifier:(id)arg1;
- (id)init;
- (id)initWithDeviceObsoletionDuration:(double)arg1 tombstoneObsoletionDuration:(double)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isValidAtDate:(id)arg1;
- (id)modifiedRecordIDsForPairedDeviceIdentifier:(id)arg1;
- (void)purge;
- (id)recordMetadataForRecordID:(id)arg1;
- (void)removePairedDeviceIdentifier:(id)arg1;
- (void)setDeletedAtDate:(id)arg1 forRecordIDs:(id)arg2;
- (void)setLastModifiedDate:(id)arg1 forRecordIDs:(id)arg2;
- (void)setPerformedInitialSyncForPairedDeviceIdentifier:(id)arg1;
- (void)setSyncDate:(id)arg1 forRecordIDs:(id)arg2 forPairedDeviceIdentifier:(id)arg3;
- (void)setSyncDate:(id)arg1 forRecordsMatchingMetadata:(id)arg2 forPairedDeviceIdentifier:(id)arg3;
- (id)unknownRecordIDsInRecordIDs:(id)arg1;
- (void)updateMetadata:(id)arg1;

@end
