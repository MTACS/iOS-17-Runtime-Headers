
@interface WFHealthUIEvent : NSObject <WFUIEvent> {
    NSDictionary * _eventDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)detailEventWithIssues:(id)arg1 ssid:(id)arg2 securityType:(long long)arg3;
+ (id)noInternetEventWithTestTimes:(long long)arg1 didPassTest:(bool)arg2 failedVelocityTests:(id)arg3 ssid:(id)arg4;
+ (id)subtitleEventWithIssues:(id)arg1 ssid:(id)arg2 securityType:(long long)arg3;
+ (id)tapLinkEventWithIssues:(id)arg1 ssid:(id)arg2 securityType:(long long)arg3;

- (void).cxx_destruct;
- (id)_eventTypeStringForType:(long long)arg1;
- (id)_issuesToJSONString:(id)arg1;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithEventType:(long long)arg1 issues:(id)arg2 ssid:(id)arg3 securityType:(long long)arg4 testTimes:(long long)arg5 didPassTest:(bool)arg6 failedTests:(id)arg7;

@end
