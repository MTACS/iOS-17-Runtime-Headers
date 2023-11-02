
@interface CKEncryptedLongLongArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *longLongArray;
@property (readonly) Class superclass;

- (id)initWithLongLongArray:(id)arg1;
- (id)longLongArray;
- (id)value;

@end
