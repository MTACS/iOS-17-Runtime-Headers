
@interface ManagedWorkoutPlanTrainerIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) ManagedWorkoutPlanModalityPreference *modalityPreference;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
