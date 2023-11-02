
@interface ManagedSkillLevelIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogWorkoutSkillLevels;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
