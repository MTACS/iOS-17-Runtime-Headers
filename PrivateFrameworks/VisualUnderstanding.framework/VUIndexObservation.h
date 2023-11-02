
@interface VUIndexObservation : NSManagedObject

@property (nonatomic, copy) NSUUID *asset;
@property (nonatomic) short client;
@property (nonatomic) float confidence;
@property (nonatomic, copy) NSData *contextualEmbedding;
@property (nonatomic, copy) NSData *embedding;
@property (nonatomic) long long identifier;
@property (nonatomic) bool isPrimary;
@property (nonatomic) long long legacyLabel;
@property (nonatomic) int legacyPartition;
@property (nonatomic, retain) VUIndexMapping *mapping;
@property (nonatomic, copy) NSUUID *moment;
@property (nonatomic) float quality;
@property (nonatomic) short source;
@property (nonatomic, retain) NSSet *tags;
@property (nonatomic) short type;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
