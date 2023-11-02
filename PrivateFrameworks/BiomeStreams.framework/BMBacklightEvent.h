
@interface BMBacklightEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    unsigned long long  _backlightLevel;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned long long backlightLevel;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (double)absoluteTimestamp;
- (unsigned long long)backlightLevel;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)init;
- (id)initWithAbsoluteTimestamp:(double)arg1 backlightLevel:(unsigned long long)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;

@end
