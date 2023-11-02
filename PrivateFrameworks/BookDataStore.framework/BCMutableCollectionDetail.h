
@interface BCMutableCollectionDetail : BCMutableCloudData <BCCollectionDetail, NSSecureCoding> {
    NSString * _collectionDescription;
    NSString * _collectionID;
    bool  _hidden;
    NSString * _name;
    int  _sortMode;
    int  _sortOrder;
}

@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSString *collectionID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int sortMode;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionDescription;
- (id)collectionID;
- (id)configuredRecordFromAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidden;
- (id)identifier;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionID:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)name;
- (id)recordType;
- (void)setCollectionDescription:(id)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSortMode:(int)arg1;
- (void)setSortOrder:(int)arg1;
- (int)sortMode;
- (int)sortOrder;
- (id)zoneName;

@end
