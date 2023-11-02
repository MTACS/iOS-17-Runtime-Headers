
@interface ARCoreAnalyticsEvent : NSObject {
    NSDictionary * _eventDictionary;
    NSString * _eventName;
    bool  _isReportedToCoreAnalytics;
}

@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;

- (void).cxx_destruct;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithEventName:(id)arg1 eventDictionary:(id)arg2;
- (void)reportEvent;

@end
