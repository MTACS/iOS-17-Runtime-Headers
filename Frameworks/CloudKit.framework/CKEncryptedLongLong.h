
@interface CKEncryptedLongLong : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long longLongValue;
@property (readonly) Class superclass;

- (id)initWithLongLong:(long long)arg1;
- (long long)longLongValue;
- (id)value;

@end
