
@interface ManagedTrainerIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramTrainers;
@property (nonatomic, retain) NSSet *catalogWorkoutTrainers;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
