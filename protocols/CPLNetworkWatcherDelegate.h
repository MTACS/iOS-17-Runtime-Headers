
@protocol CPLNetworkWatcherDelegate <NSObject>

@required

- (void)watcher:(CPLNetworkWatcher *)arg1 stateDidChangeToNetworkState:(CPLNetworkState *)arg2;

@end
