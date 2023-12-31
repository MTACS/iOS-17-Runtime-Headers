
@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _recordIDsToGrant;
    NSArray * _recordIDsToRevoke;
}

@property (nonatomic, retain) NSArray *recordIDsToGrant;
@property (nonatomic, retain) NSArray *recordIDsToRevoke;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordIDsToGrant;
- (id)recordIDsToRevoke;
- (void)setRecordIDsToGrant:(id)arg1;
- (void)setRecordIDsToRevoke:(id)arg1;

@end
