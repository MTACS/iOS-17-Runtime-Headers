
@interface BMSoundDetectionEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _type;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAbsoluteTimestamp:(double)arg1 type:(id)arg2 customName:(id)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (id)type;

@end
