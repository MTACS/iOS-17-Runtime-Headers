
@interface ASDAppMetricsEvent : NSObject <NSSecureCoding> {
    long long  _eventSubtype;
    NSNumber * _eventTime;
    long long  _eventType;
    NSDictionary * _payload;
    bool  _posted;
}

@property (nonatomic) long long eventSubtype;
@property (nonatomic, copy) NSNumber *eventTime;
@property (nonatomic) long long eventType;
@property (nonatomic, copy) NSDictionary *payload;
@property (getter=isPosted, nonatomic) bool posted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventSubtype;
- (id)eventTime;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (bool)isPosted;
- (id)payload;
- (void)setEventSubtype:(long long)arg1;
- (void)setEventTime:(id)arg1;
- (void)setEventType:(long long)arg1;
- (void)setPayload:(id)arg1;
- (void)setPosted:(bool)arg1;

@end
