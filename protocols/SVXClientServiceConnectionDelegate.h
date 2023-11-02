
@protocol SVXClientServiceConnectionDelegate <NSObject>

@required

- (<SVXPerforming> *)clientServiceConnection:(SVXClientServiceConnection *)arg1 performerForComponent:(long long)arg2;
- (void)clientServiceConnectionDidInvalidate:(SVXClientServiceConnection *)arg1;

@end
