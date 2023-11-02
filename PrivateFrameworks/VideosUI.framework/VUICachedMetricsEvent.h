
@interface VUICachedMetricsEvent : NSObject {
    NSDictionary * _eventData;
    NSString * _eventType;
}

@property (nonatomic, copy) NSDictionary *eventData;
@property (nonatomic, copy) NSString *eventType;

- (void).cxx_destruct;
- (id)eventData;
- (id)eventType;
- (id)initWithEventType:(id)arg1 eventData:(id)arg2;
- (void)setEventData:(id)arg1;
- (void)setEventType:(id)arg1;

@end
