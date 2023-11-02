
@interface _MKFHomeManager : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManager, MKFHomeManagerPrivateExtensions>

@property (nonatomic, readonly, retain) NSArray *accounts;
@property (nonatomic, retain) NSSet *accounts_;
@property (nonatomic, retain) NSDictionary *appDataDictionary;
@property (nonatomic, copy) NSNumber *assistantSyncDataPosted;
@property (nonatomic, copy) NSString *controllerKeyIdentifier;
@property (nonatomic, readonly, copy) MKFHomeManagerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) NSArray *homes;
@property (nonatomic, retain) NSSet *homes_;
@property (nonatomic, readonly, retain) NSArray *incomingInvitations;
@property (nonatomic, retain) NSSet *incomingInvitations_;
@property (nonatomic, retain) _MKFHAPMetadata *metadata;
@property (nonatomic, retain) <MKFHAPMetadata> *metadata;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) NSArray *pairingAppleAccessories;
@property (nonatomic, retain) _MKFHomeManagerHome *primaryHome;
@property (nonatomic, retain) <MKFHomeManagerHome> *primaryHome;
@property (nonatomic, copy) NSUUID *primitiveModelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)defaultModelID;
+ (id)fetchRequest;
+ (id)fetchWithContext:(id)arg1 error:(id*)arg2;

- (id)accounts;
- (void)awakeFromInsert;
- (id)castIfHomeManager;
- (id)databaseID;
- (id)findAccountsRelationWithModelID:(id)arg1;
- (id)findHomesRelationWithModelID:(id)arg1;
- (id)findIncomingInvitationsRelationWithModelID:(id)arg1;
- (id)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(bool)arg2 error:(id*)arg3;
- (id)homes;
- (id)incomingInvitations;
- (id)materializeOrCreateAccountsRelationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateHomesRelationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateIncomingInvitationsRelationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateMetadataRelation:(bool*)arg1;
- (bool)validateModelID:(id*)arg1 error:(id*)arg2;

@end
