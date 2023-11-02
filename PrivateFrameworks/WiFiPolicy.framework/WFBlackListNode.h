
@interface WFBlackListNode : NSObject {
    NSMutableArray * _blacklistMetrics;
    NSMutableArray * _blacklistTriggers;
    NSMutableArray * _blacklistedStatesCurrent;
    NSMutableArray * _blacklistedStatesHistory;
    bool  _enterprisePolicy;
    <WFBlacklistNetwork> * _networkDelegate;
}

@property (retain) NSMutableArray *blacklistTriggers;
@property (retain) NSMutableArray *blacklistedStatesCurrent;
@property (retain) NSMutableArray *blacklistedStatesHistory;
@property bool enterprisePolicy;
@property (retain) <WFBlacklistNetwork> *networkDelegate;

- (void).cxx_destruct;
- (id)_copyCreateBlacklistedState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3;
- (void)addBlacklistTrigger:(unsigned long long)arg1 reasonData:(long long)arg2 bssid:(id)arg3;
- (void)addBlacklistedState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3;
- (void)addBlacklistedStateHistory:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 reasonData:(long long)arg4;
- (id)blacklistTriggers;
- (id)blacklistedStatesCurrent;
- (id)blacklistedStatesHistory;
- (bool)containsNetwork:(id)arg1;
- (void)dealloc;
- (bool)enterprisePolicy;
- (bool)hasBlacklistedState:(unsigned long long)arg1;
- (id)initWithBlacklistNetwork:(id)arg1;
- (id)networkDelegate;
- (void)networkPruned;
- (void)processBlacklistedStateMetric:(id)arg1 unblacklisting:(bool)arg2 unblacklistingReason:(unsigned long long)arg3;
- (void)setBlacklistTriggers:(id)arg1;
- (void)setBlacklistedStatesCurrent:(id)arg1;
- (void)setBlacklistedStatesHistory:(id)arg1;
- (void)setEnterprisePolicy:(bool)arg1;
- (void)setNetworkDelegate:(id)arg1;
- (bool)updateNetwork:(id)arg1;

@end
