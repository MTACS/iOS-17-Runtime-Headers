
@protocol BKHIDDomainServiceDelegate <NSObject>

@optional

- (void)connectionDidBegin:(BSServiceConnection *)arg1 process:(BSProcessHandle *)arg2;
- (void)connectionDidTerminate:(BSServiceConnection *)arg1 process:(BSProcessHandle *)arg2;

@end
