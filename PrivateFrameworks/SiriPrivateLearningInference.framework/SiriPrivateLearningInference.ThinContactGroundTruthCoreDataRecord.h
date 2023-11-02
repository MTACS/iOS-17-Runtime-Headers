
@interface SiriPrivateLearningInference.ThinContactGroundTruthCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSData *groundTruthSource;
@property (nonatomic, copy) NSString *groundTruthType;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord *plusContactSuggestion;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
