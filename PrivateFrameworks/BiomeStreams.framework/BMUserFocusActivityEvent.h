
@interface BMUserFocusActivityEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _clientID;
    bool  _isStart;
    NSString * _mode;
}

@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStart;
@property (nonatomic, copy) NSString *mode;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)clientID;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithMode:(id)arg1 clientID:(id)arg2 isStart:(bool)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (id)json;
- (id)jsonDict;
- (id)mode;
- (id)proto;
- (id)serialize;
- (void)setClientID:(id)arg1;
- (void)setMode:(id)arg1;

@end
