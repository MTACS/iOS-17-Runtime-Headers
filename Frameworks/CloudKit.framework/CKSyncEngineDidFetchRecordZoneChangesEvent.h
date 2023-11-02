
@interface CKSyncEngineDidFetchRecordZoneChangesEvent : CKSyncEngineEvent {
    NSError * _error;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)error;
- (id)initWithZoneID:(id)arg1 error:(id)arg2;
- (long long)type;
- (id)zoneID;

@end
