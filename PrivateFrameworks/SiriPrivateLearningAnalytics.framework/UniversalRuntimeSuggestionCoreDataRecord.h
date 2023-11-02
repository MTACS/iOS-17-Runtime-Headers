
@interface UniversalRuntimeSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) bool needsDisambiguation;
@property (nonatomic, copy) NSString *queryEntityName;
@property (nonatomic, retain) UniversalCandidateCoreDataRecord *topCandidate;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
