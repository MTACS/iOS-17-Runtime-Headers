
@interface ManagedWorkoutPlanModalityPreference : NSManagedObject

@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSSet *preferredMusicGenres;
@property (nonatomic, retain) NSSet *preferredTrainers;
@property (nonatomic, retain) ManagedWorkoutPlanTemplate *template;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
