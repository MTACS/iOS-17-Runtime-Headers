
@interface MKFLocalBulletinCondition : HMDManagedObject

@property (nonatomic, retain) MKFLocalBulletinRegistration *registration;

+ (id)fetchRequest;

@end
