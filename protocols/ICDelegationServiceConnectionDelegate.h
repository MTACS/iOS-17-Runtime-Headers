
@protocol ICDelegationServiceConnectionDelegate <NSObject>

@optional

- (void)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didEncouterError:(NSError *)arg2;
- (bool)delegationServiceConnection:(ICDelegationServiceConnection *)arg1 didReceiveRequest:(ICPBDGSRequest *)arg2;
- (void)delegationServiceConnectionDidClose:(ICDelegationServiceConnection *)arg1;

@end
