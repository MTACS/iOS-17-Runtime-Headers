
@interface BMMindfulnessSessionEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    unsigned long long  _sessionType;
    unsigned long long  _stateType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) unsigned long long stateType;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSessionType:(unsigned long long)arg1 stateType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (unsigned long long)sessionType;
- (void)setSessionType:(unsigned long long)arg1;
- (void)setStateType:(unsigned long long)arg1;
- (unsigned long long)stateType;

@end
