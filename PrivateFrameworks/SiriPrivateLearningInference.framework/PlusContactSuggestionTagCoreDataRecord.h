
@interface PlusContactSuggestionTagCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *taggedItem;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
