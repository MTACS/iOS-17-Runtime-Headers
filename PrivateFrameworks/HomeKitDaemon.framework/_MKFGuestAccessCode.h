
@interface _MKFGuestAccessCode : _MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFGuestAccessCode, MKFGuestAccessCodePrivateExtensions>

@property (nonatomic, copy) NSString *accessCode;
@property (nonatomic, readonly, copy) MKFGuestAccessCodeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *hh2ModelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userUniqueIDForAccessories;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;

- (id)castIfGuestAccessCode;
- (id)databaseID;

@end
