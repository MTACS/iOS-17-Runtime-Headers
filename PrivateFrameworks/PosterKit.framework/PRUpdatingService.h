
@interface PRUpdatingService : NSObject <BSInvalidatable, PRUpdatingService_toExtension> {
    BSAuditToken * _auditToken;
    NSXPCConnection * _connection;
    _EXHostConfiguration * _hostConfig;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    NSError * _lock_invalidationError;
    NSHashTable * _observers;
    _EXExtensionProcess * _process;
    RBSProcessIdentity * _processIdentity;
    RBSTarget * _target;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *invalidationError;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) _EXExtensionProcess *process;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) RBSTarget *target;

+ (id)interfaceToExtension;
+ (id)invalidationQueue;
+ (id)updatingServiceWithHostConfiguration:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (id)_initWithHostConfiguration:(id)arg1;
- (void)_lock_invalidate;
- (bool)_lock_setupConnection:(out id*)arg1 errorHandler:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (id)auditToken;
- (id)bundleIdentifier;
- (void)captureSnapshotForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (id)invalidationError;
- (bool)isValid;
- (id)process;
- (id)processIdentity;
- (void)removeObserver:(id)arg1;
- (id)target;
- (void)updateConfiguration:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)updateDescriptors:(id)arg1 sessionInfo:(id)arg2 completion:(id /* block */)arg3;

@end
