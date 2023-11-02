
@interface _MKFAccount : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccount, MKFAccountPrivateExtensions>

@property (nonatomic, readonly, copy) MKFAccountDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSArray *devices;
@property (nonatomic, retain) NSSet *devices_;
@property (nonatomic, readonly, retain) NSArray *handles;
@property (nonatomic, retain) NSSet *handles_;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHomeManager *homeManager;
@property (nonatomic, readonly, retain) <MKFHomeManager> *homeManager;
@property (nonatomic, retain) HMDAccountIdentifier *identifier;
@property (nonatomic, copy) NSNumber *local;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfAccount;
- (id)databaseID;
- (id)devices;
- (id)findDevicesRelationWithModelID:(id)arg1;
- (id)findHandlesRelationWithModelID:(id)arg1;
- (id)handles;
- (id)materializeOrCreateDevicesRelationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateHandlesRelationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (void)synchronizeDevicesRelationWith:(id)arg1;
- (void)synchronizeHandlesRelationWith:(id)arg1;

@end
