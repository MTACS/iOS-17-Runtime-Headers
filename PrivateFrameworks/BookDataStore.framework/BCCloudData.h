
@interface BCCloudData : NSManagedObject <BCCloudData> {
    <BCCloudDataPrivacyDelegate> * _privacyDelegate;
}

@property (nonatomic, copy) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic, copy) NSString *saltedHashedID;
@property (readonly) Class superclass;
@property (nonatomic) long long syncGeneration;
@property (nonatomic, copy) CKRecord *systemFields;

+ (id)localIdentifierFromRecord:(id)arg1;
+ (id)propertyIDKey;

- (void).cxx_destruct;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (id)configuredRecordFromAttributes;
- (bool)hasValidSalt;
- (id)identifier;
- (void)incrementEditGeneration;
- (bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(bool)arg2;
- (id)mutableCopy;
- (id)privacyDelegate;
- (id)recordType;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (void)setPrivacyDelegate:(id)arg1;
- (void)setSystemFields:(id)arg1;
- (id)systemFields;
- (id)zoneName;

@end
