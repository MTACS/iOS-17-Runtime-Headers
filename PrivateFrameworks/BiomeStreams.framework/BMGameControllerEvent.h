
@interface BMGameControllerEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    bool  _isControllerConnected;
    unsigned long long  _numberOfControllersConnected;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isControllerConnected;
@property (nonatomic) unsigned long long numberOfControllersConnected;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithIsControllerConnected:(bool)arg1 numberOfControllersConnected:(unsigned long long)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isControllerConnected;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfControllersConnected;
- (id)proto;
- (id)serialize;
- (void)setIsControllerConnected:(bool)arg1;
- (void)setNumberOfControllersConnected:(unsigned long long)arg1;

@end
