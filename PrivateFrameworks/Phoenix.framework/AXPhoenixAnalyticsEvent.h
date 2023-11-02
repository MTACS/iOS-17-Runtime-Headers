
@interface AXPhoenixAnalyticsEvent : NSObject {
    NSDictionary * _eventInfo;
    long long  _eventType;
}

@property (nonatomic, retain) NSDictionary *eventInfo;
@property (nonatomic) long long eventType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_jsonData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventInfo;
- (long long)eventType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 eventInfo:(id)arg2;
- (void)setEventInfo:(id)arg1;
- (void)setEventType:(long long)arg1;

@end
