
@interface ManagedArchivedSession : NSManagedObject

@property (nonatomic) int activityType;
@property (nonatomic) double duration;
@property (nonatomic) double percentageCompleted;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, retain) ManagedScoreSummary *scoreSummary;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *watchConnectionState;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
