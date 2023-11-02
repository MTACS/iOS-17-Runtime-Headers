
@interface CTStewieConnectionAssistantEvent : NSObject <NSCopying, NSSecureCoding> {
    long long  _eventType;
}

@property (nonatomic) long long eventType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEventType:(long long)arg1;

@end
