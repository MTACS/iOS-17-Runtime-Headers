
@interface HMBShareUserID : HMFObject <NSSecureCoding> {
    CKRecordID * _userRecordID;
}

@property (readonly) CKRecordID *userRecordID;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)userRecordID;

@end
