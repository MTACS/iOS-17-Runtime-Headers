
@interface CKEncryptedReference : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKReference *reference;
@property (readonly) Class superclass;

- (id)_pReferenceFromReference:(id)arg1;
- (id)_recordIDFromPRecordIdentifier:(id)arg1;
- (id)_referenceFromPReference:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)reference;
- (id)value;

@end
