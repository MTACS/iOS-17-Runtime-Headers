
@interface MKFLocalBulletinCameraSignificantEventRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long notificationModes;
@property (nonatomic) long long personFamiliarityOptions;
@property (nonatomic) long long significantEventTypes;

+ (id)fetchCameraSignificantEventRegistrationForAccessoryUUID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchRequest;

@end
