
@interface BMSiriIntentEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSData * _eventData;
    NSString * _eventType;
    NSString * _intentId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSData *eventData;
@property (nonatomic, readonly, copy) NSString *eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *intentId;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)eventData;
- (id)eventType;
- (unsigned long long)hash;
- (id)initWithIntentId:(id)arg1 eventType:(id)arg2 eventData:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;

@end
