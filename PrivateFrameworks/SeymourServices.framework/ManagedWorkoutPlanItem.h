
@interface ManagedWorkoutPlanItem : NSManagedObject

@property (nonatomic, retain) ManagedWorkoutPlanItemIndex *index;
@property (nonatomic, copy) NSString *workout;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
