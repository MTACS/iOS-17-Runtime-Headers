
@interface WiFiUsageLinkSession : WiFiUsageSession {
    int  _band;
    bool  _didBecomePrimary;
    bool  _didHandleFaultEvent;
    bool  _foundSuccessfulLinkTest;
    NSDate * _lastFaultEventHandled;
    NSString * _lastFaultEventHandledReason;
    NSDate * _lastFaultIndicationTime;
    NSDate * _lastLinkTest;
    bool  _linkUp;
    unsigned long long  _numLinkRecoverySkips;
    unsigned long long  _numLinkTestFailures;
    unsigned long long  _periodicLinkTestInterval;
}

- (void).cxx_destruct;
- (void)applicationStateDidChange:(id)arg1 withAttributes:(id)arg2;
- (void)displayStateDidChange:(bool)arg1;
- (void)faultEventDetected:(unsigned long long)arg1;
- (void)handleFaultEventWithReason:(id)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (void)interfaceRankingDidChange:(bool)arg1;
- (void)linkQualityDidChange:(id)arg1;
- (void)linkStateDidChange:(bool)arg1 isInvoluntary:(bool)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5;
- (void)lockStateDidChange:(bool)arg1;
- (id)metricName;
- (void)performLinkTestFor:(id)arg1 isTriggeredByFault:(bool)arg2;
- (void)processDHCPChanges:(id)arg1;
- (void)processDriverAvailability:(id)arg1 available:(unsigned long long)arg2 version:(unsigned long long)arg3 flags:(unsigned long long)arg4 eventID:(unsigned long long)arg5 reason:(unsigned long long)arg6 subReason:(unsigned long long)arg7 minorReason:(unsigned long long)arg8 reasonString:(id)arg9;
- (void)processIPv4Changes:(id)arg1;
- (void)processIPv6Changes:(id)arg1;
- (void)rangingCompleted;
- (void)retryLinkTest;
- (void)systemWakeStateDidChange:(bool)arg1 wokenByWiFi:(bool)arg2;
- (void)updateLinkRecoveryDisabled:(bool)arg1;
- (void)updateLinkTestInterval:(unsigned long long)arg1;
- (bool)useSavedJoinStats;

@end
