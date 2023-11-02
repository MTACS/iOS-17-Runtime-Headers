
@interface ManagedWorkoutPlanScheduleFilterProperty : NSManagedObject

@property (nonatomic, copy) NSString *bodyFocus;
@property (nonatomic, copy) NSString *equipment;
@property (nonatomic, retain) ManagedWorkoutPlanScheduledItem *item;
@property (nonatomic, copy) NSString *skillLevel;
@property (nonatomic, copy) NSString *theme;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
