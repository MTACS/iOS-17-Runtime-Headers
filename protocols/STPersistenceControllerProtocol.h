
@protocol STPersistenceControllerProtocol <NSObject>

@required

- (NSPersistentStore *)cloudStore;
- (bool)hasStoreLoaded;
- (NSPersistentStore *)localStore;
- (NSManagedObjectContext *)newBackgroundContext;
- (void)performBackgroundTask:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSManagedObjectContext *, void*
- (void)performBackgroundTaskAndWait:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSManagedObjectContext *, void*
- (bool)saveContext:(NSManagedObjectContext *)arg1 error:(id*)arg2;
- (NSManagedObjectContext *)viewContext;

@end
