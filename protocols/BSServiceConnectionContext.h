
@protocol BSServiceConnectionContext

@required

- (BSProcessHandle *)remoteProcess;
- (BSAuditToken *)remoteToken;

@end
