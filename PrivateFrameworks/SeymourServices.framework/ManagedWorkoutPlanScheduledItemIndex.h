
@interface ManagedWorkoutPlanScheduledItemIndex : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic, retain) ManagedWorkoutPlanScheduledItem *item;
@property (nonatomic, copy) NSString *offset;
@property (nonatomic, retain) ManagedWorkoutPlanTemplate *template;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
