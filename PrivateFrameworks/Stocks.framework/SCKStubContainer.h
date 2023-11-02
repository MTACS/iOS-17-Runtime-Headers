
@interface SCKStubContainer : NSObject <SCKContainerProxying> {
    long long  _accountInfoErrorMode;
    bool  _accountInfoSupportsDeviceToDeviceEncryption;
    NSArray * _databaseChangesOperationChangedZoneIDs;
    unsigned long long  _databaseChangesOperationCount;
    long long  _modifyRecordsErrorMode;
    unsigned long long  _modifyRecordsOperationCount;
    NSArray * _modifyRecordsSavedRecords;
    unsigned long long  _modifySubscriptionsOperationCount;
    NSArray * _modifySubscriptionsSavedSubscriptions;
    long long  _modifyZonesErrorMode;
    unsigned long long  _modifyZonesOperationCount;
    NSArray * _modifyZonesSavedZones;
    id /* block */  _willFinishZoneChanges;
    id /* block */  _willModifyRecords;
    long long  _zoneChangesErrorMode;
    unsigned long long  _zoneChangesOperationCount;
    NSMutableDictionary * _zoneContentsByZoneID;
}

@property (nonatomic) long long accountInfoErrorMode;
@property (nonatomic) bool accountInfoSupportsDeviceToDeviceEncryption;
@property (nonatomic, copy) NSArray *databaseChangesOperationChangedZoneIDs;
@property (nonatomic, readonly) unsigned long long databaseChangesOperationCount;
@property (nonatomic) long long modifyRecordsErrorMode;
@property (nonatomic, readonly) unsigned long long modifyRecordsOperationCount;
@property (nonatomic, readonly, copy) NSArray *modifyRecordsSavedRecords;
@property (nonatomic, readonly) unsigned long long modifySubscriptionsOperationCount;
@property (nonatomic, readonly, copy) NSArray *modifySubscriptionsSavedSubscriptions;
@property (nonatomic) long long modifyZonesErrorMode;
@property (nonatomic, readonly) unsigned long long modifyZonesOperationCount;
@property (nonatomic, readonly, copy) NSArray *modifyZonesSavedZones;
@property (nonatomic, copy) id /* block */ willFinishZoneChanges;
@property (nonatomic, copy) id /* block */ willModifyRecords;
@property (nonatomic) long long zoneChangesErrorMode;
@property (nonatomic, readonly) unsigned long long zoneChangesOperationCount;
@property (nonatomic, retain) NSMutableDictionary *zoneContentsByZoneID;

- (void).cxx_destruct;
- (long long)_ckErrorCodeForErrorMode:(long long)arg1;
- (id)_errorForErrorMode:(long long)arg1;
- (id)_errorForErrorMode:(long long)arg1 itemIDs:(id)arg2;
- (long long)accountInfoErrorMode;
- (bool)accountInfoSupportsDeviceToDeviceEncryption;
- (void)accountInfoWithCompletionHandler:(id /* block */)arg1;
- (void)addDatabaseOperation:(id)arg1;
- (id)contentsOfZone:(id)arg1;
- (id)contentsOfZone:(id)arg1 withType:(id)arg2;
- (id)databaseChangesOperationChangedZoneIDs;
- (unsigned long long)databaseChangesOperationCount;
- (id)init;
- (long long)modifyRecordsErrorMode;
- (unsigned long long)modifyRecordsOperationCount;
- (id)modifyRecordsSavedRecords;
- (unsigned long long)modifySubscriptionsOperationCount;
- (id)modifySubscriptionsSavedSubscriptions;
- (long long)modifyZonesErrorMode;
- (unsigned long long)modifyZonesOperationCount;
- (id)modifyZonesSavedZones;
- (id)recordWithName:(id)arg1 inZone:(id)arg2;
- (void)setAccountInfoErrorMode:(long long)arg1;
- (void)setAccountInfoSupportsDeviceToDeviceEncryption:(bool)arg1;
- (void)setContentsOfZone:(id)arg1 toRecords:(id)arg2;
- (void)setDatabaseChangesOperationChangedZoneIDs:(id)arg1;
- (void)setModifyRecordsErrorMode:(long long)arg1;
- (void)setModifyZonesErrorMode:(long long)arg1;
- (void)setWillFinishZoneChanges:(id /* block */)arg1;
- (void)setWillModifyRecords:(id /* block */)arg1;
- (void)setZoneChangesErrorMode:(long long)arg1;
- (void)setZoneContentsByZoneID:(id)arg1;
- (id /* block */)willFinishZoneChanges;
- (id /* block */)willModifyRecords;
- (long long)zoneChangesErrorMode;
- (unsigned long long)zoneChangesOperationCount;
- (id)zoneContentsByZoneID;

@end
