
@protocol BSServiceConnectionEndpointMonitorDelegate <NSObject>

@required

- (void)monitor:(BSServiceConnectionEndpointMonitor *)arg1 didReceiveEndpoint:(BSServiceConnectionEndpoint *)arg2;
- (void)monitor:(BSServiceConnectionEndpointMonitor *)arg1 willLoseEndpoint:(BSServiceConnectionEndpoint *)arg2;

@end
