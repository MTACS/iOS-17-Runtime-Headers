
@interface BCMutableCollectionMember : BCMutableCloudData <BCCollectionMember, NSSecureCoding> {
    NSString * _collectionMemberID;
    int  _sortOrder;
}

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

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionMemberID;
- (id)configuredRecordFromAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionMemberID:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)recordType;
- (void)setCollectionMemberID:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (int)sortOrder;
- (id)zoneName;

@end
