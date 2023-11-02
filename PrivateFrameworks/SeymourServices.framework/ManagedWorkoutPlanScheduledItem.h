
@interface ManagedWorkoutPlanScheduledItem : NSManagedObject

@property (nonatomic) int duration;
@property (nonatomic, retain) NSSet *filterProperties;
@property (nonatomic, retain) ManagedWorkoutPlanScheduledItemIndex *index;
@property (nonatomic, copy) NSString *modalityIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
