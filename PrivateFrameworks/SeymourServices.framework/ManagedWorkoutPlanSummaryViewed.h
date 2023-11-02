
@interface ManagedWorkoutPlanSummaryViewed : NSManagedObject

@property (nonatomic, copy) NSDate *dateViewed;
@property (nonatomic, copy) NSUUID *planIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
