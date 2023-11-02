
@interface MKFLocalBulletinAnnounceUserSettingRegistration : MKFLocalBulletinRegistration

@property (nonatomic) long long announceNotificationMode;
@property (nonatomic, copy) NSUUID *homeUUID;

+ (id)fetchAnnounceRegistrationWithHomeUUID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchRequest;

@end
