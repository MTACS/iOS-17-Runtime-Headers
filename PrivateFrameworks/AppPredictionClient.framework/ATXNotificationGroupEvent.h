
@interface ATXNotificationGroupEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    NSDate * _eventDate;
    long long  _eventType;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) long long eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)eventDate;
- (long long)eventType;
- (id)initWithEventType:(long long)arg1 uuid:(id)arg2 eventDate:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)proto;
- (id)serialize;
- (id)uuid;

@end
