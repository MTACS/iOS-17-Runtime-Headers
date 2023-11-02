
@interface PGBackgroundPIPService : NSObject <BSServiceConnectionListenerDelegate, _PGBackgroundPIPServiceConnectionTargetDelegate> {
    BSServiceConnectionListener * _connectionListener;
    <PGBackgroundPIPServiceDelegate> * _delegate;
    NSSet * _identifiersForAuthorizedActivitySessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_targets;
    NSMutableDictionary * _lock_targetsByActivitySessionIdentifier;
    NSMutableSet * _mutableIdentifiersForAuthorizedActivitySessions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGBackgroundPIPServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *identifiersForAuthorizedActivitySessions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleInvalidatedTarget:(id)arg1;
- (id)_targetForIdentifier:(id)arg1;
- (void)backgroundPIPTargetDidInvalidate:(id)arg1;
- (void)backgroundPIPTargetRequestsAuthorization:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)hasAcquiredAuthorizationForActivitySessionWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (id)identifiersForAuthorizedActivitySessions;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)pipDidStartForRemoteObject:(id)arg1;
- (void)pipDidStopForRemoteObject:(id)arg1;
- (void)revokeAuthorizationActivitySessionWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startListener;

@end
