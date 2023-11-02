
@interface CKSyncEngineWillFetchRecordZoneChangesEvent : CKSyncEngineEvent {
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (long long)type;
- (id)zoneID;

@end
