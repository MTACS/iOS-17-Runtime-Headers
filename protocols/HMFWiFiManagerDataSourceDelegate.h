
@protocol HMFWiFiManagerDataSourceDelegate <NSObject>

@required

- (void)currentNetworkDidChangeForDataSource:(id <HMFWiFiManagerDataSource>)arg1;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeLinkAvailability:(bool)arg2;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeWoWState:(bool)arg2;

@end
