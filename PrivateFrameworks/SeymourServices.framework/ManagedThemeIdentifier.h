
@interface ManagedThemeIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramThemes;
@property (nonatomic, retain) NSSet *catalogWorkoutThemes;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
