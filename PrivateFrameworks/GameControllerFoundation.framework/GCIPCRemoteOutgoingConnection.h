
@interface GCIPCRemoteOutgoingConnection : GCIPCRemoteConnection <GCIPCOutgoingConnection>

@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) struct { unsigned int x1[8]; } peerAuditToken;
@property (readonly) NSString *peerBundleIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) int peerProcessIdentifier;

+ (id)sharedConnectionWorkloop;

- (id)debugDescription;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (id)redactedDescription;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)arg1;

@end
