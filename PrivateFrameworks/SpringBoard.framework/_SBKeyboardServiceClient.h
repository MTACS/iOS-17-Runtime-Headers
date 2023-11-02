
@interface _SBKeyboardServiceClient : NSObject {
    BSServiceConnection<BSServiceConnectionContext> * _connectionContext;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly) BSServiceConnection<BSServiceConnectionContext> *connectionContext;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (id)auditToken;
- (id)connectionContext;
- (id)description;
- (id)initWithConnectionContext:(id)arg1;
- (int)pid;

@end
