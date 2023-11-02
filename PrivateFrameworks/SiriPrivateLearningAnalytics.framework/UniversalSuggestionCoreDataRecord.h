
@interface UniversalSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *candidates;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSString *queryEntityName;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
