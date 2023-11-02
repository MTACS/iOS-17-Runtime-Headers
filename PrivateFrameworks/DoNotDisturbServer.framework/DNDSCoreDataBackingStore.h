
@interface DNDSCoreDataBackingStore : NSObject {
    NSPersistentContainer * _persistentContainer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _setupLock;
    NSURL * _testDatabaseURL;
}

- (void).cxx_destruct;
- (id)_initWithURL:(id)arg1;
- (id)newManagedObjectContext;
- (void)setupPersistentStoreIfNeeded;

@end
