
@interface BMWorkoutEvent : BMEventBase <BMEventBinaryStepping, BMProtoBufWrapper, BMStoreData> {
    bool  _starting;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithStarting:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStarting;
- (id)proto;
- (id)serialize;
- (void)setStarting:(bool)arg1;

@end
