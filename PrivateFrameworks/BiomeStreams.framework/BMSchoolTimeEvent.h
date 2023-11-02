
@interface BMSchoolTimeEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    unsigned long long  _reason;
    bool  _starting;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long reason;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithStarting:(bool)arg1;
- (id)initWithStarting:(bool)arg1 reason:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isStarting;
- (id)proto;
- (unsigned long long)reason;
- (id)serialize;
- (void)setReason:(unsigned long long)arg1;
- (void)setStarting:(bool)arg1;

@end
