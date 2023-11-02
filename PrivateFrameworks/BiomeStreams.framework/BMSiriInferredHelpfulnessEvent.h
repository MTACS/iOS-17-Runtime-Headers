
@interface BMSiriInferredHelpfulnessEvent : NSObject <BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    double  _absoluteTimestamp;
    double  _inferredHelpfulnessScore;
    NSString * _modelID;
    double  _restatementScore;
    NSString * _turnID;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double inferredHelpfulnessScore;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly) double restatementScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *turnID;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)inferredHelpfulnessScore;
- (id)initWithAbsoluteTimestamp:(double)arg1;
- (id)initWithAbsoluteTimestamp:(double)arg1 inferredHelpfulnessScore:(double)arg2 restatementScore:(double)arg3 turnID:(id)arg4 modelID:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSiriInferredHelpfulnessEvent:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)modelID;
- (id)proto;
- (double)restatementScore;
- (id)serialize;
- (id)turnID;

@end
