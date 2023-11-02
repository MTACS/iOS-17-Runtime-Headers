
@interface _GCIPCRemoteIncomingConnection : GCIPCRemoteIncomingConnection <_GCIPCIncomingConnection> {
    _GCIPCRemoteProcess * _process;
}

@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) struct { unsigned int x1[8]; } peerAuditToken;
@property (readonly) NSString *peerBundleIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) int peerProcessIdentifier;
@property (nonatomic, readonly) <_GCIPCProcess> *process;

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 fromProcess:(id)arg2;
- (id)process;

@end
