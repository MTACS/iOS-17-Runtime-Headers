
@interface ManagedContributorIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramContributors;
@property (nonatomic, retain) NSSet *catalogWorkoutContributors;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
