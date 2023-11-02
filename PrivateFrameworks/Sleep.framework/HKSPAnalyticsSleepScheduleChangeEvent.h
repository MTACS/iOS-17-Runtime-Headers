
@interface HKSPAnalyticsSleepScheduleChangeEvent : NSObject <HKSPAnalyticsEvent> {
    NSString * _eventName;
    NSDictionary * _eventPayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic, retain) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keysRequiringIHAGating;
@property (readonly) Class superclass;

+ (id)_payloadWithApplication:(id)arg1 isSleepTrackingEnabled:(bool)arg2 activeWatchProductType:(id)arg3 provenanceSource:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)eventName;
- (id)eventPayload;
- (id)initWithScheduleChangeInfo:(id)arg1 provenanceInfo:(id)arg2;
- (void)setEventName:(id)arg1;
- (void)setEventPayload:(id)arg1;

@end
