
@interface BCCollectionMember : BCCloudData <BCCollectionMember>

@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (nonatomic, copy) NSString *collectionMemberID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;

+ (id)assetIDFromCollectionMemberID:(id)arg1;
+ (id)collectionIDFromCollectionMemberID:(id)arg1;
+ (id)collectionMemberIDWithCollectionID:(id)arg1 assetID:(id)arg2;
+ (id)propertyIDKey;

- (void)_configureFromCollectionMember:(id)arg1 withMergers:(id)arg2;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (id)debugDescription;
- (id)identifier;
- (bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(bool)arg2;
- (id)mutableCopy;
- (id)recordType;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (id)zoneName;

@end
