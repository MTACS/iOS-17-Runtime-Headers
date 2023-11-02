
@interface _MKFHAPMetadata : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHAPMetadata, MKFHAPMetadataPrivateExtensions>

@property (nonatomic, readonly, copy) MKFHAPMetadataDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHomeManager *homeManager;
@property (nonatomic, readonly, retain) <MKFHomeManager> *homeManager;
@property (nonatomic, retain) NSData *legacyCloudData;
@property (nonatomic, retain) NSData *legacyIDSData;
@property (nonatomic, copy) NSNumber *metadataVersion;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) NSData *rawPlist;
@property (nonatomic, copy) NSNumber *schemaVersion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHAPMetadata;
- (id)databaseID;
- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
