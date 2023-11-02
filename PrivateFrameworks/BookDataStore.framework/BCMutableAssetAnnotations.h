
@interface BCMutableAssetAnnotations : BCMutableCloudData <BCAssetAnnotations> {
    NSString * _assetID;
    NSString * _assetVersion;
    NSData * _bookAnnotations;
}

@property (nonatomic, readonly, copy) NSString *assetID;
@property (nonatomic, copy) NSString *assetVersion;
@property (nonatomic, retain) NSData *bookAnnotations;
@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;

- (void).cxx_destruct;
- (id)assetID;
- (id)assetVersion;
- (id)bookAnnotations;
- (id)configuredRecordFromAttributes;
- (id)debugDescription;
- (id)identifier;
- (id)initWithAssetID:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)recordType;
- (void)setAssetVersion:(id)arg1;
- (void)setBookAnnotations:(id)arg1;
- (id)zoneName;

@end
