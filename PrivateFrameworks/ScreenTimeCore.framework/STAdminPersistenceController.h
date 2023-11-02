
@interface STAdminPersistenceController : STPersistenceController

+ (id)sharedController;

- (id)init;
- (id)newBackgroundContext;
- (void)performBackgroundTask:(id /* block */)arg1;
- (void)performBackgroundTaskAndWait:(id /* block */)arg1;
- (bool)saveContext:(id)arg1 error:(id*)arg2;
- (id)viewContext;

@end
