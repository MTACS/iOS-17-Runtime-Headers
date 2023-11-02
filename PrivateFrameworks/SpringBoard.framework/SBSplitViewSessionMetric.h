
@interface SBSplitViewSessionMetric : SBAnalyticsStateMachineEventHandler {
    NSUUID * _aggregateSessionIdentifier;
    NSString * _aggregateSessionStartReason;
    double  _aggregateSessionStartTimestamp;
    NSString * _individualSessionPrimaryBundleIdentifier;
    NSString * _individualSessionSideBundleIdentifier;
    NSString * _individualSessionStartReason;
    double  _individualSessionStartTimestamp;
}

@property (nonatomic, copy) NSUUID *aggregateSessionIdentifier;
@property (nonatomic, copy) NSString *aggregateSessionStartReason;
@property (nonatomic) double aggregateSessionStartTimestamp;
@property (nonatomic, copy) NSString *individualSessionPrimaryBundleIdentifier;
@property (nonatomic, copy) NSString *individualSessionSideBundleIdentifier;
@property (nonatomic, copy) NSString *individualSessionStartReason;
@property (nonatomic) double individualSessionStartTimestamp;

- (void).cxx_destruct;
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)arg1 fromContext:(id)arg2;
- (bool)_sendAggregateSessionCoreAnalyticsEventWithIdentifier:(id)arg1 startReason:(id)arg2 endReason:(id)arg3 duration:(double)arg4 doNotDisturbActive:(bool)arg5 hardwareKeyboardAttached:(bool)arg6;
- (bool)_sendIndividualSessionCoreAnalyticsEventWithAggregateIdentifier:(id)arg1 startReason:(id)arg2 endReason:(id)arg3 duration:(double)arg4 primaryBundleIdentifier:(id)arg5 sideBundleIdentifier:(id)arg6 doNotDisturbActive:(bool)arg7 hardwareKeyboardAttached:(bool)arg8;
- (id)aggregateSessionIdentifier;
- (id)aggregateSessionStartReason;
- (double)aggregateSessionStartTimestamp;
- (id)individualSessionPrimaryBundleIdentifier;
- (id)individualSessionSideBundleIdentifier;
- (id)individualSessionStartReason;
- (double)individualSessionStartTimestamp;
- (id)initWithHeartbeatMetricPersistence:(id)arg1;
- (bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;
- (void)setAggregateSessionIdentifier:(id)arg1;
- (void)setAggregateSessionStartReason:(id)arg1;
- (void)setAggregateSessionStartTimestamp:(double)arg1;
- (void)setIndividualSessionPrimaryBundleIdentifier:(id)arg1;
- (void)setIndividualSessionSideBundleIdentifier:(id)arg1;
- (void)setIndividualSessionStartReason:(id)arg1;
- (void)setIndividualSessionStartTimestamp:(double)arg1;

@end
