
@interface CHCoreDataController : NSObject {
    NSPersistentContainer * _persistentContainer;
}

@property (readonly) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (void)addPersistentStoreFromDatabase;
- (id)persistentContainer;

@end
