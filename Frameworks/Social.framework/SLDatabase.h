
@interface SLDatabase : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSString * _modelPath;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSString * _storePath;
}

- (void).cxx_destruct;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
- (void)_setUpManagedObjectContext;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)initWithStoreName:(id)arg1 modelPath:(id)arg2;
- (id)newObjectForEntityNamed:(id)arg1;
- (bool)save:(id*)arg1;

@end
