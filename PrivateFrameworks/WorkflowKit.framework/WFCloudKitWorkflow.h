
@interface WFCloudKitWorkflow : NSObject <WFCloudKitItem, WFCloudKitWalrusMigrationSupporting> {
    NSString * _associatedAppBundleIdentifier;
    WFWorkflowRecord * _cachedRecord;
    long long  _cachedSyncHash;
    NSDate * _createdAt;
    long long  _encryptedSchemaVersion;
    NSString * _galleryIdentifier;
    CKRecordID * _identifier;
    NSString * _lastSavedOnDeviceName;
    NSDate * _modifiedAt;
    NSString * _name;
    NSData * _recordSystemFieldsData;
    NSData * _serializedAccessResourcePerWorkflowStateData;
    WFFileRepresentation * _serializedDataFile;
    NSData * _serializedQuarantineData;
    NSData * _serializedSmartPromptsPerWorkflowStateData;
    NSString * _source;
    NSString * _workflowSubtitle;
}

@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, retain) WFWorkflowRecord *cachedRecord;
@property (nonatomic) long long cachedSyncHash;
@property (nonatomic, readonly) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long encryptedSchemaVersion;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, copy) NSString *lastSavedOnDeviceName;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (nonatomic, copy) NSData *serializedAccessResourcePerWorkflowStateData;
@property (nonatomic, retain) WFFileRepresentation *serializedDataFile;
@property (nonatomic, copy) NSData *serializedQuarantineData;
@property (nonatomic, copy) NSData *serializedSmartPromptsPerWorkflowStateData;
@property (nonatomic, copy) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *workflowSubtitle;

+ (id)encryptedNameProperty;
+ (long long)latestEncryptedSchemaVersion;
+ (id)nameProperty;
+ (id)properties;
+ (id)recordIDWithZoneID:(id)arg1 workflowID:(id)arg2;
+ (id)recordType;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (id)cachedRecord;
- (long long)cachedSyncHash;
- (id)createdAt;
- (long long)encryptedSchemaVersion;
- (id)ensureFileAssets;
- (id)galleryIdentifier;
- (id)identifier;
- (id)initWithRecord:(id)arg1 identifier:(id)arg2;
- (bool)isValidForSyncing;
- (id)lastSavedOnDeviceName;
- (id)modifiedAt;
- (id)name;
- (id)recordRepresentationWithError:(id*)arg1;
- (id)recordSystemFieldsData;
- (id)serializedAccessResourcePerWorkflowStateData;
- (id)serializedDataFile;
- (id)serializedQuarantineData;
- (id)serializedSmartPromptsPerWorkflowStateData;
- (void)setAssociatedAppBundleIdentifier:(id)arg1;
- (void)setCachedRecord:(id)arg1;
- (void)setCachedSyncHash:(long long)arg1;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (void)setEncryptedSchemaVersion:(long long)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setLastSavedOnDeviceName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecordSystemFieldsData:(id)arg1;
- (void)setSerializedAccessResourcePerWorkflowStateData:(id)arg1;
- (void)setSerializedDataFile:(id)arg1;
- (void)setSerializedQuarantineData:(id)arg1;
- (void)setSerializedSmartPromptsPerWorkflowStateData:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setWorkflowSubtitle:(id)arg1;
- (id)source;
- (id)workflowSubtitle;

@end
