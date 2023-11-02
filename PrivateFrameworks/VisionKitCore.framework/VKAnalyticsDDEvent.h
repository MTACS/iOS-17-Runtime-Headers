
@interface VKAnalyticsDDEvent : VKAnalyticsEvent {
    unsigned long long  _dataDetectorTypes;
    long long  _eventType;
}

@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) long long eventType;

- (id)coreAnalyticsDictionary;
- (unsigned long long)dataDetectorTypes;
- (id)description;
- (id)eventKey;
- (long long)eventType;
- (id)initWithElement:(id)arg1 eventType:(long long)arg2 customIdentifier:(id)arg3;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setEventType:(long long)arg1;
- (long long)type;

@end
