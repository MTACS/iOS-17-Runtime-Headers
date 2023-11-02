
@interface ACDTransientDatabase : NSObject <ACDDatabaseProtocol> {
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)createConnection;
- (id)init;

@end
