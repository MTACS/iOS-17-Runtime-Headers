
@interface _MKFUserAccessCode : _MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUserAccessCode, MKFUserAccessCodePrivateExtensions>

@property (nonatomic, copy) NSString *accessCode;
@property (nonatomic, readonly, copy) MKFUserAccessCodeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MKFUser *user;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;

- (id)castIfUserAccessCode;
- (id)databaseID;
- (id)home;

@end
