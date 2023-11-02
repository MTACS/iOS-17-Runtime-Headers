
@interface CKRecordChange : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding> {
    long long  _changeType;
    CKRecord * _record;
    CKRecordID * _recordID;
}

@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKRecord *record;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (long long)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChangeType:(long long)arg1 recordID:(id)arg2 record:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)record;
- (id)recordID;
- (id)redactedDescription;

@end
