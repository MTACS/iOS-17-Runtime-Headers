
@interface _MKFNotificationRegistrationCharacteristic : _MKFNotificationRegistration <MKFNotificationRegistrationCharacteristic, MKFNotificationRegistrationCharacteristicPrivateExtensions>

@property (nonatomic, retain) <MKFCharacteristic> *characteristic;
@property (nonatomic, retain) _MKFCharacteristic *characteristic;
@property (nonatomic, readonly, copy) MKFNotificationRegistrationCharacteristicDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdsDestination;
@property (nonatomic, copy) NSNumber *enabled;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfNotificationRegistrationCharacteristic;
- (id)databaseID;
- (id)home;

@end
