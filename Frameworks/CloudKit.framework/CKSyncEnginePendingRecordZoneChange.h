
@interface CKSyncEnginePendingRecordZoneChange : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding> {
    CKRecordID * _recordID;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)recordChangesWithOppositeTypeFromRecordChanges:(id)arg1;
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
- (id)initWithRecordID:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)oppositeTypeChange;
- (id)recordID;
- (id)redactedDescription;
- (long long)type;

@end
