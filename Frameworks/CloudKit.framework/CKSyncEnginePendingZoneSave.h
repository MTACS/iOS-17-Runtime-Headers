
@interface CKSyncEnginePendingZoneSave : CKSyncEnginePendingDatabaseChange {
    CKRecordZone * _zone;
}

@property (nonatomic, readonly, copy) CKRecordZone *zone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZone:(id)arg1;
- (id)oppositeTypeChange;
- (id)zone;
- (id)zoneID;

@end
