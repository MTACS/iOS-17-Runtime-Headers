
@interface PKCloudDeletedRecord : NSObject <NSSecureCoding> {
    CKRecordID * _recordID;
    NSString * _recordType;
}

@property (nonatomic, readonly) bool isPass;
@property (nonatomic, readonly) bool isPassCatalog;
@property (nonatomic, readonly) bool isRemoteAsset;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordName;
@property (nonatomic, readonly, copy) NSString *recordType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeletedRecord:(id)arg1;
- (bool)isPass;
- (bool)isPassCatalog;
- (bool)isRemoteAsset;
- (id)recordID;
- (id)recordName;
- (id)recordType;

@end
