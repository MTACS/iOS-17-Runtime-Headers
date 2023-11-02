
@interface SiriPrivateLearningInference.PlusContactSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *contributingGroundTruth;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord *inferredContactReference;
@property (nonatomic) double score;
@property (nonatomic, copy) NSData *scoreHistory;
@property (nonatomic, retain) NSOrderedSet *tags;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSData *usoPersonQuery;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
