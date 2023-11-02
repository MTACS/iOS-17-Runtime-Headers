
@interface ISStore : NSObject {
    NSXPCConnection * _connection;
    NSString * _domain;
    NSMutableDictionary * _registry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registryLock;
    NSURL * _storeURL;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSString *domain;
@property (readonly) NSMutableDictionary *registry;
@property struct os_unfair_lock_s { unsigned int x1; } registryLock;
@property (readonly) NSURL *storeURL;

- (void).cxx_destruct;
- (id)addUnitWithData:(id)arg1;
- (id)connection;
- (id)domain;
- (id)initWithURL:(id)arg1;
- (id)registry;
- (struct os_unfair_lock_s { unsigned int x1; })registryLock;
- (bool)removeUnitForUUID:(id)arg1;
- (void)setRegistryLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (id)storeURL;
- (id)unitForUUID:(id)arg1;
- (bool)writeStoreUnit:(id)arg1;

@end
