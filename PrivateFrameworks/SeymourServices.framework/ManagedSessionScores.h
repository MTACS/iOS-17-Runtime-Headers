
@interface ManagedSessionScores : NSManagedObject

@property (nonatomic) long long activityType;
@property (nonatomic, copy) NSData *scores;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) int workoutDuration;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
