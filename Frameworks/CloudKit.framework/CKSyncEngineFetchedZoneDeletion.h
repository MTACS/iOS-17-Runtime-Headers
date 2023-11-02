
@interface CKSyncEngineFetchedZoneDeletion : NSObject <CKPropertiesDescription> {
    long long  _reason;
    CKRecordZoneID * _zoneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)description;
- (id)initWithZoneID:(id)arg1 reason:(long long)arg2;
- (long long)reason;
- (id)redactedDescription;
- (id)zoneID;

@end
