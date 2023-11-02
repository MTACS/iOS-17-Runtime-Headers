
@interface ManagedCatalogPreview : NSManagedObject

@property (nonatomic, retain) NSSet *catalogModalityMetadata;
@property (nonatomic, retain) NSSet *catalogProgramMetadata;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *streamingProgramIdentifier;
@property (nonatomic, copy) NSString *streamingURL;
@property (nonatomic, retain) NSSet *trainerMetadata;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
