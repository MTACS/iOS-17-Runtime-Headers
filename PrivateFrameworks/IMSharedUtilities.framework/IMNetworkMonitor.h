
@interface IMNetworkMonitor : NSObject {
    void delegate;
    void host;
    void monitor;
    void networkAvailable;
    void queue;
}

@property (nonatomic, readonly) bool immediatelyReachable;
@property (nonatomic, readonly) NSString *remoteHost;

- (void).cxx_destruct;
- (void)clear;
- (id)description;
- (bool)immediatelyReachable;
- (id)init;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (id)remoteHost;

@end
