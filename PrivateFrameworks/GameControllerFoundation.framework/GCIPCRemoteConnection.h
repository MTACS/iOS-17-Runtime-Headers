
@interface GCIPCRemoteConnection : NSObject <GCIPCConnection> {
    NSXPCConnection * _connection;
    NSArray * _interruptionHandlers;
    _Atomic bool  _invalid;
    NSArray * _invalidationHandlers;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (copy) NSArray *interruptionHandlers;
@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (copy) NSArray *invalidationHandlers;
@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) struct { unsigned int x1[8]; } peerAuditToken;
@property (readonly) NSString *peerBundleIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) int peerProcessIdentifier;

- (void).cxx_destruct;
- (id)addInterruptionHandler:(id /* block */)arg1;
- (id)addInvalidationHandler:(id /* block */)arg1;
- (id)connection;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)interruptionHandlers;
- (void)invalidate;
- (id)invalidationHandlers;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConnection:(id)arg1;
- (bool)isInvalid;
- (id)log;
- (int)peerAuditSessionIdentifier;
- (struct { unsigned int x1[8]; })peerAuditToken;
- (id)peerBundleIdentifier;
- (unsigned int)peerEffectiveGroupIdentifier;
- (unsigned int)peerEffectiveUserIdentifier;
- (int)peerProcessIdentifier;
- (id)peerValueForEntitlement:(id)arg1;
- (id)redactedDescription;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)scheduleSendBarrierBlock:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setInterruptionHandlers:(id)arg1;
- (void)setInvalidationHandlers:(id)arg1;
- (void)suspend;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)arg1;

@end
