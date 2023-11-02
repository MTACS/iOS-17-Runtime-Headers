
@interface _MKFHomeThreadNetwork : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeThreadNetwork, MKFHomeThreadNetworkPrivateExtensions>

@property (nonatomic, readonly, copy) MKFHomeThreadNetworkDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *threadNetworkID;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHomeThreadNetwork;
- (id)databaseID;

@end
