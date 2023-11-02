
@protocol BSServiceConnectionHost

@required

- (BSProcessHandle *)remoteProcess;
- (BSAuditToken *)remoteToken;

@end
