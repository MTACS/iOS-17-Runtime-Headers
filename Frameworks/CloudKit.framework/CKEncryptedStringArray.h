
@interface CKEncryptedStringArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *stringArray;
@property (readonly) Class superclass;

- (id)initWithStringArray:(id)arg1;
- (id)stringArray;
- (id)value;

@end
