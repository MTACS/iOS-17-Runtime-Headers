
@interface WFUserJoinEvent : NSObject <WFUIEvent> {
    NSDictionary * _eventDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)joinEventWithSecurity:(long long)arg1 error:(long long)arg2 sectionCounts:(id)arg3 sectionName:(id)arg4 didRun:(bool)arg5 didPass:(bool)arg6 failedTests:(id)arg7;
+ (id)joinEventWithType:(long long)arg1 security:(long long)arg2 error:(long long)arg3 didRun:(bool)arg4 didPass:(bool)arg5 failedTests:(id)arg6;

- (void).cxx_destruct;
- (id)_eventTypeStringForType:(long long)arg1;
- (id)_sectionCountsToJSONString:(id)arg1;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithType:(long long)arg1 security:(long long)arg2 error:(long long)arg3 sectionCounts:(id)arg4 sectionName:(id)arg5 didRunVelocityTests:(bool)arg6 didPassVelocityTests:(bool)arg7 failedTests:(id)arg8;

@end
