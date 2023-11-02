
@interface CARConnectionEvent : NSObject <NSSecureCoding> {
    NSDate * _eventDate;
    NSString * _eventName;
    long long  _eventType;
    NSUUID * _identifier;
    NSDictionary * _payload;
    NSString * _transportType;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) NSString *transportType;

+ (id)eventWithName:(id)arg1 type:(long long)arg2 date:(id)arg3 payload:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDate;
- (id)eventName;
- (long long)eventType;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEventName:(id)arg1 type:(long long)arg2 date:(id)arg3 payload:(id)arg4;
- (id)payload;
- (id)transportType;

@end
