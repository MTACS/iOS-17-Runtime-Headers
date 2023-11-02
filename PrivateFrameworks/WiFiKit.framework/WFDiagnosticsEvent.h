
@interface WFDiagnosticsEvent : NSObject <WFUIEvent> {
    NSDictionary * _eventDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_testTypeToString:(long long)arg1;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithDiagnosticsEventType:(long long)arg1 didPassTest:(bool)arg2 failedTests:(id)arg3;

@end
