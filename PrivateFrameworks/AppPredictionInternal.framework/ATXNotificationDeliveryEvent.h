
@interface ATXNotificationDeliveryEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    unsigned long long  _deliveryUI;
    NSArray * _suggestionUUIDs;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deliveryUI;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *suggestionUUIDs;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (unsigned long long)deliveryUI;
- (id)encodeAsProto;
- (id)initWithDeliveryUI:(unsigned long long)arg1 suggestionUUIDs:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXNotificationDeliveryEvent:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)proto;
- (id)serialize;
- (id)suggestionUUIDs;

@end
