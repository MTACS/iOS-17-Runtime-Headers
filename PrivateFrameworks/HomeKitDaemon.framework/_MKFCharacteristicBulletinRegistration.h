
@interface _MKFCharacteristicBulletinRegistration : _MKFBulletinRegistration <MKFCharacteristicBulletinRegistration, MKFCharacteristicBulletinRegistrationPrivateExtensions>

@property (nonatomic, retain) <MKFCharacteristic> *characteristic;
@property (nonatomic, retain) _MKFCharacteristic *characteristic;
@property (nonatomic, readonly, retain) NSArray *conditions;
@property (nonatomic, readonly, copy) MKFCharacteristicBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdsDestination;
@property (nonatomic, copy) NSUUID *deviceIdsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfCharacteristicBulletinRegistration;
- (id)databaseID;
- (id)home;

@end
