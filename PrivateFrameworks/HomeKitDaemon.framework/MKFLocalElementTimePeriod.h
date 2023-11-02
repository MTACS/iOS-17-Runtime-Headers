
@interface MKFLocalElementTimePeriod : HMDManagedObject

@property (nonatomic, retain) MKFLocalBulletinConditionTimePeriod *endCondition;
@property (nonatomic, retain) MKFLocalBulletinConditionTimePeriod *startCondition;

+ (id)fetchRequest;

@end
