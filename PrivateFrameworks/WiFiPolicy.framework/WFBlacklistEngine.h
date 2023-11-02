
@interface WFBlacklistEngine : NSObject {
    double  _autojoinBlacklistExpiry;
    NSMutableArray * _blacklist;
    <WFBlacklistDelegate> * _blacklistDelegate;
    double  _bssBlacklistExpiry;
    NSMutableArray * _bssidThresholds;
    bool  _enabled;
    unsigned long long  _profile;
    NSMutableArray * _ssidThresholds;
    double  _wowBlacklistExpiry;
}

@property double autojoinBlacklistExpiry;
@property (nonatomic) <WFBlacklistDelegate> *blacklistDelegate;
@property double bssBlacklistExpiry;
@property (retain) NSMutableArray *bssidThresholds;
@property bool enabled;
@property (retain) NSMutableArray *ssidThresholds;
@property double wowBlacklistExpiry;

+ (id)stringRepresentationWithReason:(unsigned long long)arg1;
+ (id)stringRepresentationWithState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_evaluateTriggersForBlacklisting:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4 ssid:(id)arg5 state:(unsigned long long)arg6;
- (bool)_evaluateTriggersForUnblacklisting:(id)arg1 unblacklistReason:(unsigned long long)arg2 ssid:(id)arg3;
- (id)_findBlacklistNode:(id)arg1;
- (bool)_ignoreTriggersForDeviceProfile:(unsigned long long)arg1 node:(id)arg2;
- (bool)_meetsThresholds:(unsigned long long)arg1 count:(unsigned int)arg2 perSsid:(bool)arg3 bssid:(id)arg4 ssid:(id)arg5;
- (void)_printBlacklist;
- (void)_setBlacklistedState:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 reasonData:(long long)arg4;
- (double)autojoinBlacklistExpiry;
- (id)blacklistDelegate;
- (double)bssBlacklistExpiry;
- (id)bssidThresholds;
- (bool)changeBlacklistingThresholds:(unsigned long long)arg1 value:(unsigned int)arg2 perSsid:(bool)arg3;
- (void)clearTriggerForNetworkWithUnblacklistReason:(id)arg1 reason:(unsigned long long)arg2;
- (void)configureBlacklistedStateExpiryIntervalInSec:(double)arg1 state:(unsigned long long)arg2;
- (void)dealloc;
- (id)denyListThreshold:(unsigned long long)arg1 perSSID:(bool)arg2;
- (bool)enabled;
- (id)getBlacklist;
- (unsigned long long)getBlacklistedNetworkCount;
- (id)getNodeFromBlacklist:(id)arg1;
- (long long)getRssiWhenNetworkWasBlacklisted:(id)arg1;
- (id)initWithBlacklistDelegate:(id)arg1 profile:(unsigned long long)arg2;
- (bool)isNetworkBlacklistedForAutoJoinDueToTrigDisc:(id)arg1 rssi:(long long*)arg2 timestamp:(double*)arg3;
- (bool)isNetworkInBlacklistedState:(id)arg1 state:(unsigned long long)arg2;
- (void)networkPruned:(id)arg1;
- (void)networkRemovedForSsid:(id)arg1;
- (bool)removeBlacklistedStateForNetworkWithReason:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)removeBlacklistedStateWithUnblacklistType:(unsigned long long)arg1;
- (void)removeBlacklistedStates;
- (void)removeExpiredBlacklistedState:(unsigned long long)arg1;
- (id)retrieveBlacklistedNetworkSsids:(unsigned long long)arg1;
- (id)retrieveBlacklistedStateHistoryForNetwork:(id)arg1 state:(unsigned long long)arg2 timestamps:(id)arg3 reasonData:(id)arg4;
- (id)retrieveNetworksInBlacklistedState:(unsigned long long)arg1;
- (id)retrieveNetworksInBlacklistedStateHistory:(unsigned long long)arg1;
- (id)retrieveReasonsForNetworkInBlacklistedState:(id)arg1 state:(unsigned long long)arg2 timestamps:(id)arg3 reasonData:(id)arg4;
- (void)setAutojoinBlacklistExpiry:(double)arg1;
- (void)setBlacklistDelegate:(id)arg1;
- (void)setBssBlacklistExpiry:(double)arg1;
- (void)setBssidThresholds:(id)arg1;
- (void)setDefaultBlacklistThresholds;
- (void)setEnabled:(bool)arg1;
- (void)setSsidThresholds:(id)arg1;
- (void)setTriggerForNetworkWithReason:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4;
- (void)setTriggerForNetworkWithReasonAndState:(id)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 bssid:(id)arg4 state:(unsigned long long)arg5;
- (void)setWowBlacklistExpiry:(double)arg1;
- (id)ssidThresholds;
- (double)wowBlacklistExpiry;

@end
