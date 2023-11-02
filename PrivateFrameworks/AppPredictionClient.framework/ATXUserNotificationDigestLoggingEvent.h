
@interface ATXUserNotificationDigestLoggingEvent : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    long long  _eventType;
    ATXUserNotificationDigest * _notificationDigest;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXUserNotificationDigest *notificationDigest;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (id)initFromJSON:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationDigest:(id)arg1 eventType:(long long)arg2 timestamp:(double)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)jsonRepresentation;
- (id)notificationDigest;
- (id)proto;
- (id)serialize;
- (void)setEventType:(long long)arg1;
- (void)setNotificationDigest:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end