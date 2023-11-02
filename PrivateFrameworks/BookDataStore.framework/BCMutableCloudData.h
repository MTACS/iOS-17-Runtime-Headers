
@interface BCMutableCloudData : NSObject <BCCloudData, NSSecureCoding> {
    bool  _deletedFlag;
    long long  _editGeneration;
    NSString * _localRecordID;
    NSDate * _modificationDate;
    <BCCloudDataPrivacyDelegate> * _privacyDelegate;
    long long  _syncGeneration;
    CKRecord * _systemFields;
}

@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localRecordID;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (nonatomic) long long syncGeneration;
@property (nonatomic, copy) CKRecord *systemFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ckSystemFields;
- (id)configuredRecordFromAttributes;
- (bool)deletedFlag;
- (long long)editGeneration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (void)incrementEditGeneration;
- (id)init;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localRecordID;
- (id)modificationDate;
- (id)privacyDelegate;
- (id)recordType;
- (void)setDeletedFlag:(bool)arg1;
- (void)setEditGeneration:(long long)arg1;
- (void)setLocalRecordID:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPrivacyDelegate:(id)arg1;
- (void)setSyncGeneration:(long long)arg1;
- (void)setSystemFields:(id)arg1;
- (long long)syncGeneration;
- (id)systemFields;
- (id)zoneName;

@end
