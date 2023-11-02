
@protocol BSServiceListener <NSObject>

@required

- (void)didReceiveConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg1;
- (NSString *)instance;
- (NSString *)service;

@end
