
@interface ManagedHealthKitWorkout : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isIndoorWorkout;
@property (nonatomic, retain) ManagedHealthKitSessionReference *sessionReference;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int workoutActivityType;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
