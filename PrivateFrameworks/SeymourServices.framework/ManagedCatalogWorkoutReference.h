
@interface ManagedCatalogWorkoutReference : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *bodyFocusIdentifierss;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, retain) NSOrderedSet *contributorIdentifierss;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic) double duration;
@property (nonatomic) int episode;
@property (nonatomic, retain) NSOrderedSet *equipmentIdentifierss;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSOrderedSet *musicGenreIdentifierss;
@property (nonatomic, retain) NSOrderedSet *skillLevelIdentifierss;
@property (nonatomic, retain) NSOrderedSet *themeIdentifierss;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSOrderedSet *trainerIdentifierss;
@property (nonatomic, retain) NSSet *traits;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
