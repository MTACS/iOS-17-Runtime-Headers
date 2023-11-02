
@protocol MTFetchedResultsControllerProtocol

@required

- (<NSFetchedResultsControllerDelegate> *)delegate;
- (NSFetchRequest *)fetchRequest;
- (NSArray *)fetchedObjects;
- (NSIndexPath *)indexPathForObject:(NSManagedObject *)arg1;
- (id)initWithFetchRequest:(NSFetchRequest *)arg1 managedObjectContext:(NSManagedObjectContext *)arg2 sectionNameKeyPath:(NSString *)arg3 cacheName:(NSString *)arg4;
- (NSManagedObjectContext *)managedObjectContext;
- (NSManagedObject *)objectAtIndexPath:(NSIndexPath *)arg1;
- (bool)performFetch:(id*)arg1;
- (NSArray *)propertyKeys;
- (void)setDelegate:(id <NSFetchedResultsControllerDelegate>)arg1;
- (void)setPropertyKeys:(NSArray *)arg1;

@end
