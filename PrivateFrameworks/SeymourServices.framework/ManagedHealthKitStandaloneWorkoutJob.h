
@interface ManagedHealthKitStandaloneWorkoutJob : NSManagedObject

@property (nonatomic, copy) NSString *catalogWorkoutIdentifier;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSUUID *healthKitWorkoutIdentifier;
@property (nonatomic, copy) NSString *playlistIdentifier;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int workoutActivityType;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
