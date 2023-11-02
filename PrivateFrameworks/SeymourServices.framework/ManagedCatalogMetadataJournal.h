
@interface ManagedCatalogMetadataJournal : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double timestamp;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
