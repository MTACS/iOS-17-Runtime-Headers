
@interface WiFiUsageNetworkSession : WiFiUsageSession {
    NSObject<OS_dispatch_queue> * _WiFiLinkStateBiomeEventQueue;
    bool  _dnuEnabled;
    NSDate * _lastLinkDownTime;
    NSDate * _lastLinkUpTime;
    WiFiUsageNetworkDetails * _lastNetworkDetails;
    bool  _linkUp;
    NSMutableSet * _neighborBssList;
    double  _networkUsageDuration;
    NSMutableSet * _otherBssList;
}

- (void).cxx_destruct;
- (void)displayStateDidChange:(bool)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (bool)isSessionHarvestable;
- (void)joinStateDidChange:(id)arg1 withReason:(unsigned long long)arg2 lastDisconnectReason:(long long)arg3 lastJoinFailure:(long long)arg4 andNetworkDetails:(id)arg5;
- (void)linkStateDidChange:(bool)arg1 isInvoluntary:(bool)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5;
- (id)metricName;
- (void)processForgetNetwork:(id)arg1;
- (void)scanningStateDidChange:(bool)arg1 client:(unsigned long long)arg2 neighborBSS:(id)arg3 otherBSS:(id)arg4;
- (void)sessionDidEnd;
- (void)sessionDidStart;

@end
