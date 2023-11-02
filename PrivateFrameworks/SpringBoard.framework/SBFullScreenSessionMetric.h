
@interface SBFullScreenSessionMetric : SBAnalyticsStateMachineEventHandler {
    NSString * _primaryBundleIdentifier;
    NSString * _sideBundleIdentifier;
    NSString * _startReason;
    double  _startTimestamp;
}

@property (nonatomic, copy) NSString *primaryBundleIdentifier;
@property (nonatomic, copy) NSString *sideBundleIdentifier;
@property (nonatomic, copy) NSString *startReason;
@property (nonatomic) double startTimestamp;

- (void).cxx_destruct;
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)arg1 fromContext:(id)arg2;
- (bool)_sendCoreAnalyticsEventWithStartReason:(id)arg1 endReason:(id)arg2 duration:(double)arg3 primaryBundleIdentifier:(id)arg4 doNotDisturbActive:(bool)arg5 hardwareKeyboardAttached:(bool)arg6;
- (id)init;
- (id)primaryBundleIdentifier;
- (bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;
- (void)setPrimaryBundleIdentifier:(id)arg1;
- (void)setSideBundleIdentifier:(id)arg1;
- (void)setStartReason:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (id)sideBundleIdentifier;
- (id)startReason;
- (double)startTimestamp;

@end
