
@interface _MKFNotificationRegistration : _MKFModel <MKFNotificationRegistration, MKFNotificationRegistrationPrivateExtensions>

@property (nonatomic, readonly, copy) MKFNotificationRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdsDestination;
@property (nonatomic, copy) NSNumber *enabled;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MKFUser *user;
@property (nonatomic, readonly, retain) <MKFUser> *user;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfNotificationRegistration;
- (id)databaseID;
- (id)home;

@end
