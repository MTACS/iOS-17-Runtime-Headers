
@interface SBHeartbeatMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    NSCalendar * _calendar;
    NSISO8601DateFormatter * _dateFormatter;
    SBHeartbeatMetricPersistence * _heartbeatMetricPersistence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHeartbeatMetricPersistence *heartbeatMetricPersistence;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_makePayloadFromMetricsByDatestamp:(id)arg1;
- (id)calendar;
- (id)dateFormatter;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)heartbeatMetricPersistence;
- (id)initWithPersistence:(id)arg1;
- (bool)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;

@end
