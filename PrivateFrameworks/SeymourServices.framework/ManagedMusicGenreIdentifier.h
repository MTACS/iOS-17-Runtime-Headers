
@interface ManagedMusicGenreIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramMusicGenres;
@property (nonatomic, retain) NSSet *catalogWorkoutMusicGenres;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
