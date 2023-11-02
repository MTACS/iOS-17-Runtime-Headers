
@interface _MKFSoftwareUpdate : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSoftwareUpdate, MKFSoftwareUpdatePrivateExtensions>

@property (nonatomic, retain) _MKFAccessory *accessory;
@property (nonatomic, readonly, retain) <MKFAccessory> *accessory;
@property (nonatomic, readonly, copy) MKFSoftwareUpdateDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (nonatomic, copy) NSNumber *downloadSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSNumber *installDuration;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, copy) NSNumber *state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfSoftwareUpdate;
- (id)databaseID;
- (id)home;

@end
