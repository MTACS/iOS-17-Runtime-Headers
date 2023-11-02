
@interface VUIndexSubset : NSManagedObject

@property (nonatomic) long long contextualEmbeddingRevision;
@property (nonatomic) long long embeddingRevision;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic) bool staleObservations;
@property (nonatomic) bool staleTags;
@property (nonatomic) short type;
@property (nonatomic) int version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
