
@interface PlusMediaSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *contributingGroundTruth;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) PlusMediaReferenceCoreDataRecord *inferredMediaReference;
@property (nonatomic) double lastUpdated;
@property (nonatomic, copy) NSData *leftHandKey;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double score;
@property (nonatomic, copy) NSData *scoreHistory;
@property (nonatomic, retain) NSOrderedSet *tags;
@property (nonatomic) double timestamp;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
