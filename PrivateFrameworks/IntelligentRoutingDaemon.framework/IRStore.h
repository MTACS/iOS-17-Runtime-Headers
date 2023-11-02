
@interface IRStore : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    IRPersistenceManager * _persistenceManager;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) IRPersistenceManager *persistenceManager;

- (void).cxx_destruct;
- (bool)batchDeleteObjectsWithEntityName:(id)arg1 byAndPredicates:(id)arg2 sortDescriptors:(id)arg3 andLimit:(unsigned long long)arg4;
- (bool)commitChangesToStore;
- (id)countManagedObjectWithEntityName:(id)arg1 byAndPredicates:(id)arg2 sortDescriptors:(id)arg3 andLimit:(unsigned long long)arg4;
- (id)fetchManagedObjectWithEntityName:(id)arg1 byAndPredicates:(id)arg2 sortDescriptors:(id)arg3 andLimit:(unsigned long long)arg4;
- (id)fetchManagedObjectsWithEntityName:(id)arg1 byAndPredicates:(id)arg2 sortDescriptors:(id)arg3 andLimit:(unsigned long long)arg4;
- (id)fetchObjectWithEntityName:(id)arg1 byAndPredicates:(id)arg2 sortDescriptors:(id)arg3 andLimit:(unsigned long long)arg4;
- (id)fetchObjectsWithEntityName:(id)arg1 byAndPredicates:(id)arg2 sortDescriptors:(id)arg3 andLimit:(unsigned long long)arg4;
- (id)initWithPersistenceManager:(id)arg1;
- (id)managedObjectContext;
- (id)persistenceManager;

@end
