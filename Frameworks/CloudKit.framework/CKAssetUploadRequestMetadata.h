
@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding> {
    NSData * _fileSignature;
    long long  _listIndex;
    NSData * _referenceSignature;
}

@property (nonatomic, readonly, copy) NSData *fileSignature;
@property (nonatomic, readonly) long long listIndex;
@property (nonatomic, readonly, copy) NSData *referenceSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSignature;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7 listIndex:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (long long)listIndex;
- (id)referenceSignature;

@end
