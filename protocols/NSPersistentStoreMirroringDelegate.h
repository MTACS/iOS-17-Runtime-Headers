
@protocol NSPersistentStoreMirroringDelegate <NSObject>

@required

- (void)persistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 didSuccessfullyAddPersistentStore:(NSPersistentStore *)arg2 withDescription:(NSPersistentStoreDescription *)arg3;
- (bool)validateManagedObjectModel:(NSManagedObjectModel *)arg1 forUseWithStoreWithDescription:(NSPersistentStoreDescription *)arg2 error:(id*)arg3;

@end
