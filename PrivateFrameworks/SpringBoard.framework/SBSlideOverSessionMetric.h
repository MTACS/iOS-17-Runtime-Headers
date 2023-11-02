
@interface SBSlideOverSessionMetric : SBAnalyticsStateMachineEventHandler {
    NSString * _floatingBundleIdentifier;
    NSString * _startReason;
    double  _startTimestamp;
}

@property (nonatomic, copy) NSString *floatingBundleIdentifier;
@property (nonatomic, copy) NSString *startReason;
@property (nonatomic) double startTimestamp;

- (void).cxx_destruct;
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)arg1 fromContext:(id)arg2;
- (bool)_sendCoreAnalyticsEventWithStartReason:(id)arg1 endReason:(id)arg2 duration:(double)arg3 floatingBundleIdentifier:(id)arg4 doNotDisturbActive:(bool)arg5 hardwareKeyboardAttached:(bool)arg6;
- (id)floatingBundleIdentifier;
- (id)initWithHeartbeatMetricPersistence:(id)arg1;
- (bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;
- (void)setFloatingBundleIdentifier:(id)arg1;
- (void)setStartReason:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (id)startReason;
- (double)startTimestamp;

@end
