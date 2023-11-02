
@interface _MKFRemovedUserAccessCode : _MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRemovedUserAccessCode, MKFRemovedUserAccessCodePrivateExtensions>

@property (nonatomic, copy) NSString *accessCode;
@property (nonatomic, readonly, copy) MKFRemovedUserAccessCodeDatabaseID *databaseID;
@property (nonatomic, copy) NSDate *dateRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *hh2ModelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, copy) NSUUID *userModelID;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;

- (id)castIfRemovedUserAccessCode;
- (id)databaseID;

@end
