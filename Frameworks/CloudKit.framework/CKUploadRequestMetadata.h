
@interface CKUploadRequestMetadata : NSObject <CKRoughlyEquivalent, NSCopying, NSSecureCoding> {
    long long  _databaseScope;
    NSString * _fieldName;
    CKRecordID * _recordID;
    NSString * _recordType;
    CKRecordID * _repairZoneRecordID;
}

@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (nonatomic, readonly, copy) NSString *fieldName;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, readonly, copy) CKRecordID *repairZoneRecordID;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (id)fieldName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)recordID;
- (id)recordType;
- (id)repairZoneRecordID;

@end
