
@interface _SBExternalDisplayServiceClient : NSObject {
    BSServiceConnection * _connection;
    BSProcessHandle * _remoteProcess;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly) BSServiceConnection *connection;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) BSProcessHandle *remoteProcess;

- (void).cxx_destruct;
- (id)auditToken;
- (id)connection;
- (id)description;
- (id)initWithConnection:(id)arg1 remoteProcess:(id)arg2;
- (int)pid;
- (id)remoteProcess;

@end
