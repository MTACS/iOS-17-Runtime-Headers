
@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject <BMProtoBufWrapper> {
    double  _timestamp;
    NSData * _valueData;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly, copy) NSData *valueData;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTimestamp:(double)arg1 valueData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (double)timestamp;
- (id)valueData;

@end
