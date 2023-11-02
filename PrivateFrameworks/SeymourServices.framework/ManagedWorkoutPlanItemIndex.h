
@interface ManagedWorkoutPlanItemIndex : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic, retain) ManagedWorkoutPlanItem *item;
@property (nonatomic, copy) NSString *offset;
@property (nonatomic, retain) ManagedWorkoutPlan *plan;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
