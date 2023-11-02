
@interface IRMediaEvent : IREvent {
    NSString * _bundleID;
    NSString * _contextIdentifier;
    long long  _eventSubType;
    long long  _eventType;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *contextIdentifier;
@property (nonatomic, readonly) long long eventSubType;
@property (nonatomic, readonly) long long eventType;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEventSubTypeValid:(long long)arg1;
- (bool)_isEventTypeValid:(long long)arg1;
- (id)bundleID;
- (id)contextIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventSubType;
- (long long)eventType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 eventSubType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setContextIdentifier:(id)arg1;

@end
