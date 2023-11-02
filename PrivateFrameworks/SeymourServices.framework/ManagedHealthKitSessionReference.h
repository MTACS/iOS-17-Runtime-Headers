
@interface ManagedHealthKitSessionReference : NSManagedObject

@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) ManagedHealthKitWorkout *workout;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
