
@interface MKFLocalBulletinRegistration : HMDManagedObject

@property (nonatomic, retain) NSSet *conditions;
@property (nonatomic) bool enabled;

+ (id)fetchRequest;

@end
