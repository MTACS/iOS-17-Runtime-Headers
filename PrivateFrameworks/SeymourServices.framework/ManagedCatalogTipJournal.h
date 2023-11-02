
@interface ManagedCatalogTipJournal : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) double elapsedTime;
@property (nonatomic, copy) NSString *journalIdentifier;
@property (nonatomic, copy) NSString *tipIdentifier;
@property (nonatomic) double totalTime;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
