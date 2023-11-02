
@interface _MKFNotificationRegistrationMediaProperty : _MKFNotificationRegistration <MKFNotificationRegistrationMediaProperty, MKFNotificationRegistrationMediaPropertyPrivateExtensions>

@property (nonatomic, retain) _MKFAccessory *accessory;
@property (nonatomic, retain) <MKFAccessory> *accessory;
@property (nonatomic, readonly, copy) MKFNotificationRegistrationMediaPropertyDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdsDestination;
@property (nonatomic, copy) NSNumber *enabled;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic, copy) NSUUID *mediaProfileIdentifier;
@property (nonatomic, copy) NSString *mediaProperty;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfNotificationRegistrationMediaProperty;
- (id)databaseID;
- (id)home;
- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
