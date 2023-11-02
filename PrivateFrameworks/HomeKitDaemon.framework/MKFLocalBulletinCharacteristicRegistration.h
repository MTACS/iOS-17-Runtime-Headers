
@interface MKFLocalBulletinCharacteristicRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long characteristicInstanceID;
@property (nonatomic) long long serviceInstanceID;

+ (id)fetchCharacteristicRegistrationForAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 managedObjectContext:(id)arg4;
+ (id)fetchRequest;

@end
