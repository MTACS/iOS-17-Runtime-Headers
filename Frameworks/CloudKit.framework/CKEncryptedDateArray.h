
@interface CKEncryptedDateArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (nonatomic, readonly, copy) NSArray *dateArray;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dateArray;
- (id)initWithDateArray:(id)arg1;
- (id)value;

@end
