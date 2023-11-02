
@interface CKEncryptedString : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *string;
@property (readonly) Class superclass;

- (id)initWithString:(id)arg1;
- (id)string;
- (id)value;

@end
