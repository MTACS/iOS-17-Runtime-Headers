
@interface MKFLocalBulletinAccessoryRegistration : MKFLocalBulletinRegistration

@property (nonatomic, copy) NSUUID *accessoryModelID;

+ (id)fetchRequest;

@end
