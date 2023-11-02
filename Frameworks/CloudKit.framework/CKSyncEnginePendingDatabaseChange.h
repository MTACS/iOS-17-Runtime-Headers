
@interface CKSyncEnginePendingDatabaseChange : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding> {
    long long  _type;
    CKRecordZoneID * _zoneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

+ (id)databaseChangesWithOppositeTypeFromDatabaseChanges:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)oppositeTypeChange;
- (id)redactedDescription;
- (long long)type;
- (id)zoneID;

@end
