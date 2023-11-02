
@interface MKFLocalBulletinServiceRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long serviceInstanceID;

+ (id)fetchRequest;
+ (id)fetchServiceRegistrationForAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 managedObjectContext:(id)arg3;

@end
