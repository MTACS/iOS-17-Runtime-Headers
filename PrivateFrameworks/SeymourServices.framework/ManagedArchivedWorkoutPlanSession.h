
@interface ManagedArchivedWorkoutPlanSession : NSManagedObject

@property (nonatomic, copy) NSUUID *planIdentifier;
@property (nonatomic, retain) ManagedWorkoutPlanReference *reference;
@property (nonatomic, copy) NSString *sessionIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
