
@interface SiriAnalyticsDerivativeClock : SiriAnalyticsLogicalClock {
    NSUUID * _isolatedStreamUUID;
    SiriAnalyticsLogicalClock * _rootClock;
}

@property (nonatomic, readonly) NSUUID *isolatedStreamUUID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithClockIdentifier:(id)arg1 isolatedStreamUUID:(id)arg2 timestampOffset:(unsigned long long)arg3 rootClock:(id)arg4;
- (id)isolatedStreamUUID;

@end
