
@interface MTFetchedResultsController : NSObject <MTFetchedResultsControllerProtocol, NSFetchedResultsControllerDelegate> {
    NSMutableArray * _changes;
    <NSFetchedResultsControllerDelegate> * _delegate;
    NSFetchedResultsController * _frc;
    NSMutableDictionary * _propertyCache;
    NSArray * _propertyKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSFetchedResultsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, readonly) NSArray *fetchedObjects;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, copy) NSArray *propertyKeys;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dictionaryForObject:(id)arg1;
- (id)_dictionaryFromCacheForObjectID:(id)arg1;
- (bool)_hasManagedObjectChanged:(id)arg1;
- (void)_removeObjectFromCacheWithId:(id)arg1;
- (void)_updateCacheWithManagedObject:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)delegate;
- (id)fetchRequest;
- (id)fetchedObjects;
- (id)indexPathForObject:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (id)managedObjectContext;
- (id)objectAtIndexPath:(id)arg1;
- (bool)performFetch:(id*)arg1;
- (id)propertyKeys;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setPropertyKeys:(id)arg1;

@end
