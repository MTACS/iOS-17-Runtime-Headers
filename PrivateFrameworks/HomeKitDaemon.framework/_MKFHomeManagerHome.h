
@interface _MKFHomeManagerHome : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManagerHome, MKFHomeManagerHomePrivateExtensions>

@property (nonatomic, readonly, copy) MKFHomeManagerHomeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSNumber *deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDHomeManagerHomeHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHomeManager> *homeManager;
@property (nonatomic, retain) _MKFHomeManager *homeManager;
@property (nonatomic, retain) _MKFHomeManager *homeManagerPrimary;
@property (nonatomic, retain) <MKFHomeManager> *homeManagerPrimary;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfHomeManagerHome;
- (id)databaseID;
- (id)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(bool)arg2 error:(id*)arg3;

@end
