
@interface ATXUnifiedInferredActivitySession : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    double  _confidence;
    double  _endTime;
    unsigned long long  _inferredActivityType;
    NSString * _inferredMode;
    NSString * _source;
    double  _startTime;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long inferredActivityType;
@property (nonatomic, readonly) NSString *inferredMode;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (unsigned long long)inferredActivityType;
- (id)inferredMode;
- (id)initFromJSON:(id)arg1;
- (id)initFromStartTime:(double)arg1 endTime:(double)arg2 inferredMode:(id)arg3 source:(id)arg4;
- (id)initFromStartTime:(double)arg1 endTime:(double)arg2 source:(id)arg3 activityType:(unsigned long long)arg4 confidence:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder_v1:(id)arg1;
- (id)initWithCoder_v2:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUnifiedInferredActivitySession:(id)arg1;
- (id)json;
- (id)jsonRepresentation;
- (id)prettyRepresentation;
- (id)proto;
- (id)serialize;
- (id)source;
- (double)startTime;

@end
