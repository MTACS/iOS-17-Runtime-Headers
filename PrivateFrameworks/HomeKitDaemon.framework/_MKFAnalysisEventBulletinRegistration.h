
@interface _MKFAnalysisEventBulletinRegistration : _MKFBulletinRegistration <MKFAnalysisEventBulletinRegistration, MKFAnalysisEventBulletinRegistrationPrivateExtensions>

@property (nonatomic, retain) _MKFAccessory *accessory;
@property (nonatomic, retain) <MKFAccessory> *accessory;
@property (nonatomic, copy) NSNumber *classifierOptions;
@property (nonatomic, readonly, retain) NSArray *conditions;
@property (nonatomic, readonly, copy) MKFAnalysisEventBulletinRegistrationDatabaseID *databaseID;
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

- (id)castIfAnalysisEventBulletinRegistration;
- (id)databaseID;
- (id)home;

@end
