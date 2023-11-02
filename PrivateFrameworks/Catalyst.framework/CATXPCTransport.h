
@interface CATXPCTransport : CATTransport <CATXPCInterface> {
    NSXPCConnection * mConnection;
    bool  mConnectionHasInvalidated;
    bool  mConnectionHasResumed;
    bool  mConnectionShouldInvalidate;
}

@property (readonly) int auditSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) int processIdentifier;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (int)auditSessionIdentifier;
- (bool)boolValueForEntitlement:(id)arg1;
- (void)dealloc;
- (void)didInvalidate;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (void)invalidateConnection;
- (id)operationToSendMessage:(id)arg1;
- (int)processIdentifier;
- (void)processMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeConnection;
- (void)setUpConnection;
- (void)suspendConnection;
- (void)tearDownConnection;
- (void)transportSendMessageOperation:(id)arg1 processMessage:(id)arg2;
- (id)valueForEntitlement:(id)arg1;

@end
