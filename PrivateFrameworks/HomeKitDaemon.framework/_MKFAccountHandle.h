
@interface _MKFAccountHandle : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccountHandle, MKFAccountHandlePrivateExtensions>

@property (nonatomic, readonly, retain) <MKFAccount> *account;
@property (nonatomic, retain) _MKFAccount *account;
@property (nonatomic, readonly, copy) MKFAccountHandleDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) IDSURI *idsURI;
@property (nonatomic, copy) NSNumber *local;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfAccountHandle;
- (id)databaseID;

@end
