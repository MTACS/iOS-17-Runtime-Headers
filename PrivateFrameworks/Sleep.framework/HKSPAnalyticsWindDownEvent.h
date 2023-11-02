
@interface HKSPAnalyticsWindDownEvent : NSObject <HKSPAnalyticsEvent> {
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

+ (id)_payloadValueForWindDownAction:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)eventName;
- (id)eventPayload;
- (id)initWithWindDownEventData:(id)arg1 watchProductType:(id)arg2 weeksSinceOnboarded:(id)arg3;
- (void)setEventName:(id)arg1;
- (void)setEventPayload:(id)arg1;

@end
