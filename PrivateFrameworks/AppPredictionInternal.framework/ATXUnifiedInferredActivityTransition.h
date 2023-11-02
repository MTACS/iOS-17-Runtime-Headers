
@interface ATXUnifiedInferredActivityTransition : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, ATXTimedEventProtocol, BMStoreData, NSSecureCoding> {
    double  _confidence;
    unsigned long long  _inferredActivityType;
    bool  _isEntryEvent;
    NSString * _mode;
    NSString * _source;
    double  _transitionTime;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long inferredActivityType;
@property (nonatomic, readonly) bool isEntryEvent;
@property (nonatomic, readonly) NSString *mode;
@property (nonatomic, readonly) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double transitionTime;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityTypeAfterTransition;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTime;
- (unsigned long long)inferredActivityType;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)initFromTransitionTime:(double)arg1 isEntryEvent:(bool)arg2 source:(id)arg3 activityType:(unsigned long long)arg4 confidence:(double)arg5;
- (id)initFromTransitionTime:(double)arg1 isEntryEvent:(bool)arg2 source:(id)arg3 mode:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder_v1:(id)arg1;
- (id)initWithCoder_v2:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEntryEvent;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUnifiedInferredActivityTransition:(id)arg1;
- (id)json;
- (id)jsonRepresentation;
- (id)mode;
- (id)prettyRepresentation;
- (id)proto;
- (id)serialize;
- (id)source;
- (double)transitionTime;

@end
