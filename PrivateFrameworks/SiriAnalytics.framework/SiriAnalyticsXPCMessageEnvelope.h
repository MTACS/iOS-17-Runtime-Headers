
@interface SiriAnalyticsXPCMessageEnvelope : NSObject <NSSecureCoding> {
    void eventTypeId;
    void payload;
}

@property (nonatomic, readonly) long long eventTypeId;
@property (nonatomic, readonly) NSData *payload;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventTypeId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventTypeId:(long long)arg1 payload:(id)arg2;
- (id)payload;

@end
