
@interface ManagedCatalogProgramReference : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, retain) NSOrderedSet *contributorIdentifierss;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic, retain) NSOrderedSet *equipmentIdentifierss;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSOrderedSet *modalityIdentifierss;
@property (nonatomic, retain) NSOrderedSet *musicGenreIdentifierss;
@property (nonatomic, retain) NSOrderedSet *themeIdentifierss;
@property (nonatomic, retain) NSOrderedSet *trainerIdentifierss;
@property (nonatomic, retain) NSOrderedSet *workoutIdentifierss;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
