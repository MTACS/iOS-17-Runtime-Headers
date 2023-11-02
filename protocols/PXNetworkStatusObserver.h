
@protocol PXNetworkStatusObserver

@required

- (void)networkStatusMonitor:(PXNetworkStatusMonitor *)arg1 didChangeBestAvailableNetworkType:(struct { unsigned long long x1; bool x2; bool x3; })arg2;

@end
