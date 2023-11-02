
@interface HMDHomeLightBrightnessLoggerEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _accessoryUUID;
    NSString * _brightness;
    NSString * _characteristicUUID;
    NSString * _homeUUID;
}

@property (nonatomic, readonly) NSString *accessoryUUID;
@property (nonatomic, readonly) NSString *brightness;
@property (nonatomic, readonly) NSString *characteristicUUID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeUUID;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)brightness;
- (id)characteristicUUID;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2 characteristicUUID:(id)arg3 brightness:(id)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)proto;
- (id)serialize;

@end
