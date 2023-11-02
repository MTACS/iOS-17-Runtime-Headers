
@interface _EXExtensionProcessHandle : NSObject <NSSecureCoding> {
    BKSProcessAssertion * _assertion;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    _EXInternalHostConnection * _internalConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationLock;
    bool  _invalidationLock_invalidated;
    RBSAssertion * _launchAssertion;
    _EXLaunchConfiguration * _launchConfiguration;
    _EXExtensionProcessMannger * _manager;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    RBSProcessIdentity * _processIdentity;
    NSArray * _sandboxExtensions;
    NSXPCListenerEndpoint * _serviceListenerEndpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _xpcConnectionLock;
    NSHashTable * _xpcConnections;
}

@property (readonly) BKSProcessAssertion *assertion;
@property (readonly) struct { unsigned int x1[8]; } auditToken;
@property _EXInternalHostConnection *internalConnection;
@property (readonly) RBSAssertion *launchAssertion;
@property (readonly) _EXLaunchConfiguration *launchConfiguration;
@property _EXExtensionProcessMannger *manager;
@property (retain) NSHashTable *observers;
@property struct os_unfair_lock_s { unsigned int x1; } observersLock;
@property (readonly) int pid;
@property (readonly) RBSProcessIdentity *processIdentity;
@property (retain) NSArray *sandboxExtensions;
@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (getter=isValid, readonly) bool valid;
@property struct os_unfair_lock_s { unsigned int x1; } xpcConnectionLock;
@property (retain) NSHashTable *xpcConnections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAssertionInvalidation;
- (id)acquireAsertionWithError:(id*)arg1;
- (void)addObserver:(id)arg1;
- (id)assertion;
- (struct { unsigned int x1[8]; })auditToken;
- (id)configuration;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaunchConfiguration:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 processIdentity:(id)arg3 sandboxExtensions:(id)arg4 launchAssertion:(id)arg5;
- (id)internalConnection;
- (void)invalidate;
- (bool)isValid;
- (id)launchAssertion;
- (id)launchConfiguration;
- (id)makeSessionXPCConnection;
- (id)makeXPCConnection;
- (id)makeXPCConnectionRetainProcess:(bool)arg1 withError:(id*)arg2;
- (id)manager;
- (id)observers;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (int)pid;
- (id)processIdentity;
- (void)removeObserver:(id)arg1;
- (id)sandboxExtensions;
- (id)serviceListenerEndpoint;
- (void)setInternalConnection:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setObserversLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSandboxExtensions:(id)arg1;
- (void)setXpcConnectionLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setXpcConnections:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })xpcConnectionLock;
- (id)xpcConnections;

@end
