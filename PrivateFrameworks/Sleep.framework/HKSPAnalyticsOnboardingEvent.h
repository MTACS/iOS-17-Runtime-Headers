
@interface HKSPAnalyticsOnboardingEvent : NSObject <HKSPAnalyticsEvent> {
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

- (void).cxx_destruct;
- (id)description;
- (id)eventName;
- (id)eventPayload;
- (id)initWithOnboardingInfo:(id)arg1 provenanceInfo:(id)arg2;
- (void)setEventName:(id)arg1;
- (void)setEventPayload:(id)arg1;

@end
