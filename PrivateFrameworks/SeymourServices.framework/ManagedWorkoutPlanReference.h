
@interface ManagedWorkoutPlanReference : NSManagedObject

@property (nonatomic, copy) NSString *dateOffset;
@property (nonatomic) int index;
@property (nonatomic, retain) ManagedArchivedWorkoutPlanSession *session;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
