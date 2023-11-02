
@interface CKEncryptedLocation : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (readonly) Class superclass;

- (id)initWithLocation:(id)arg1;
- (id)location;
- (id)value;

@end
