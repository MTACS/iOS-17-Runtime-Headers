
@interface BCMutableStoreItem : BCMutableCloudData <BCStoreItem, NSSecureCoding> {
    NSString * _storeID;
}

@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic, copy) NSString *storeID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuredRecordFromAttributes;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithStoreID:(id)arg1;
- (id)recordType;
- (void)setStoreID:(id)arg1;
- (id)storeID;
- (id)zoneName;

@end
