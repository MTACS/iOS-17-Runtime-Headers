
@interface MKFLocalBulletinConditionPresence : MKFLocalBulletinCondition

@property (nonatomic) long long presenceEventType;
@property (nonatomic) long long presenceEventUserType;
@property (nonatomic, retain) NSSet *userModelIDs;

+ (id)fetchRequest;

@end
