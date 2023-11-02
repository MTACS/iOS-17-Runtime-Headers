
@interface BCMutableSecureUserDatum : BCMutableCloudData <BCSecureUserDatum, NSSecureCoding> {
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuredRecordFromAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)key;
- (id)recordType;
- (void)setValue:(id)arg1;
- (id)value;
- (id)zoneName;

@end
