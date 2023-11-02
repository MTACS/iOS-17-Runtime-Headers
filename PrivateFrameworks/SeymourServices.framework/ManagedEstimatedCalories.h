
@interface ManagedEstimatedCalories : NSManagedObject

@property (nonatomic) double activeCalorieRate;
@property (nonatomic) int activityType;
@property (nonatomic) double basalCalorieRate;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
