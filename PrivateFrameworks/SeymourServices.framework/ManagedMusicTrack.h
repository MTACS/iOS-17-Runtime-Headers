
@interface ManagedMusicTrack : NSManagedObject

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *title;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
