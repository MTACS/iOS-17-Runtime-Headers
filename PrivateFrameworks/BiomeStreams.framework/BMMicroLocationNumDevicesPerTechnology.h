
@interface BMMicroLocationNumDevicesPerTechnology : NSObject <BMProtoBufWrapper, BMStoreData> {
    unsigned int  _numDevices;
    NSString * _technology;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int numDevices;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *technology;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTechnology:(id)arg1 numDevices:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned int)numDevices;
- (id)proto;
- (id)serialize;
- (id)technology;

@end
