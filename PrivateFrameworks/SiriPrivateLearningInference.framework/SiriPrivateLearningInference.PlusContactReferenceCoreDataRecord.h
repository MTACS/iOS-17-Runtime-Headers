
@interface SiriPrivateLearningInference.PlusContactReferenceCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *contactId;
@property (nonatomic, copy) NSString *contactLabel;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord *contactSuggestion;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
