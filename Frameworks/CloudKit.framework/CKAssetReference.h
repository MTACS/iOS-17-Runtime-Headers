
@interface CKAssetReference : NSObject <NSCopying, NSSecureCoding> {
    long long  _databaseScope;
    NSString * _fieldName;
    NSData * _fileSignature;
    CKRecordID * _recordID;
}

@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly, copy) NSString *fieldName;
@property (nonatomic, readonly, copy) NSData *fileSignature;
@property (nonatomic, readonly, copy) CKRecordID *recordID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldName;
- (id)fileSignature;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExistingRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 fileSignature:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)recordID;

@end
