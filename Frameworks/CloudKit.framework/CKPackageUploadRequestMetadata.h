
@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding> {
    NSArray * _fileSignatures;
    NSArray * _referenceSignatures;
}

@property (nonatomic, readonly, copy) NSArray *fileSignatures;
@property (nonatomic, readonly, copy) NSArray *referenceSignatures;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSignatures;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignatures:(id)arg6 referenceSignatures:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)referenceSignatures;

@end
