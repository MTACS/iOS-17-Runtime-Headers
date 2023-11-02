
@interface _MKFApplicationData : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFApplicationData, MKFApplicationDataPrivateExtensions>

@property (nonatomic, retain) _MKFAccessory *accessory;
@property (nonatomic, readonly, retain) <MKFAccessory> *accessory;
@property (nonatomic, retain) _MKFActionSet *actionSet;
@property (nonatomic, readonly, retain) <MKFActionSet> *actionSet;
@property (nonatomic, retain) NSDictionary *appDataDictionary;
@property (nonatomic, readonly, copy) MKFApplicationDataDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) _MKFRoom *room;
@property (nonatomic, readonly, retain) <MKFRoom> *room;
@property (nonatomic, retain) _MKFService *service;
@property (nonatomic, readonly, retain) <MKFService> *service;
@property (nonatomic, retain) _MKFServiceGroup *serviceGroup;
@property (nonatomic, readonly, retain) <MKFServiceGroup> *serviceGroup;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)appDataDictionaryForContainer:(id)arg1;
+ (id)backingModelProtocol;
+ (id)castIfApplicationDataContainer:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)hmd_parentAttributeKeyPaths;
+ (id)modelIDForContainerUUID:(id)arg1;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (void)setAppDataDictionary:(id)arg1 forContainer:(id)arg2;

- (id)castIfApplicationData;
- (id)databaseID;
- (bool)hasValidContainer;
- (id)hmd_parentModelID;
- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
