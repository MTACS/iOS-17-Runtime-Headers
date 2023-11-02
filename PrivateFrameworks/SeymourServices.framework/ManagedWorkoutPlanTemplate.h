
@interface ManagedWorkoutPlanTemplate : NSManagedObject

@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) NSSet *modalityPreferences;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *schedule;
@property (nonatomic) int workoutPlanLength;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
