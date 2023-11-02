
@interface LinkChangePolicyHandler : NSObject {
    AnalyticsStoreMOHandler * _storeMOHandler;
}

@property (nonatomic, retain) AnalyticsStoreMOHandler *storeMOHandler;

- (void).cxx_destruct;
- (void)checkAndApplyColocatedNetworkScope:(id)arg1 bssid:(id)arg2 ipAddr:(int)arg3 routerIp:(int)arg4 routerMAC:(id)arg5;
- (bool)checkIpConfigChangeAndInvalidateScope:(id)arg1 bssid:(id)arg2 ipAddr:(int)arg3 routerIp:(int)arg4 routerMAC:(id)arg5;
- (id)initWithAnalyticsStore:(id)arg1;
- (void)pruneNetworksFailingBssidPatternAndIpConfigChangeChecks:(id)arg1 ipAddr:(int)arg2 routerIp:(int)arg3 routerMAC:(id)arg4;
- (void)pruneNetworksNotInRangeOf:(id)arg1 networks:(id)arg2;
- (void)pruneNetworksWithMoreThanOneBssidFromSet:(id)arg1;
- (void)setLinkChange:(bool)arg1 ssid:(id)arg2 bssid:(id)arg3 reason:(unsigned long long)arg4 subReason:(unsigned long long)arg5 rssi:(long long)arg6;
- (void)setStoreMOHandler:(id)arg1;
- (id)storeMOHandler;

@end
