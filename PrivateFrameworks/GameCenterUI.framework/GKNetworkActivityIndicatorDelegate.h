
@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate> {
    int  _networkIndicatorCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int networkIndicatorCount;
@property (readonly) Class superclass;

- (void)beginNetworkActivity;
- (void)endNetworkActivity;
- (int)networkIndicatorCount;
- (void)resetNetworkActivity;
- (void)setNetworkIndicatorCount:(int)arg1;

@end
