
@interface CKEncryptedDouble : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (nonatomic, readonly) double ckDoubleValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)ckDoubleValue;
- (id)initWithDouble:(double)arg1;
- (id)value;

@end
