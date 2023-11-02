
@interface _MKFCameraSignificantEventBulletinRegistration : _MKFBulletinRegistration <MKFCameraSignificantEventBulletinRegistration, MKFCameraSignificantEventBulletinRegistrationPrivateExtensions>

@property (nonatomic, retain) _MKFAccessory *accessory;
@property (nonatomic, retain) <MKFAccessory> *accessory;
@property (nonatomic, readonly, retain) NSArray *conditions;
@property (nonatomic, readonly, copy) MKFCameraSignificantEventBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdsDestination;
@property (nonatomic, copy) NSUUID *deviceIdsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSNumber *notificationModes;
@property (nonatomic, copy) NSNumber *personFamiliarityOptions;
@property (nonatomic, copy) NSNumber *significantEventTypes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfCameraSignificantEventBulletinRegistration;
- (id)databaseID;
- (id)home;
- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
