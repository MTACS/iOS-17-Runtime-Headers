
@interface ATXLightweightProactiveSuggestion : NSObject <ATXProtoBufWrapper> {
    unsigned char  _consumerSubType;
    NSString * _executableIdentifier;
    long long  _executableType;
    unsigned long long  _predictionReasons;
    ATXProactiveSuggestionScoreSpecification * _scoreSpecification;
}

@property (nonatomic) unsigned char consumerSubType;
@property (nonatomic, readonly) NSString *executableIdentifier;
@property (nonatomic, readonly) long long executableType;
@property (nonatomic, readonly) unsigned long long predictionReasons;
@property (nonatomic, readonly) ATXProactiveSuggestionScoreSpecification *scoreSpecification;

+ (id)lightWeightSuggestionDescriptionsFromLightWeightSuggestions:(id)arg1;
+ (id)lightWeightSuggestionsFromProtoLightWeightSuggestions:(id)arg1;
+ (id)lightWeightSuggestionsFromSuggestions:(id)arg1;
+ (id)protoLightWeightSuggestionsFromLightWeightSuggestions:(id)arg1;

- (void).cxx_destruct;
- (unsigned char)consumerSubType;
- (id)description;
- (id)encodeAsProto;
- (id)executableIdentifier;
- (long long)executableType;
- (id)init;
- (id)initWithExecutableIdentifier:(id)arg1 executableType:(long long)arg2 scoreSpecification:(id)arg3 predictionReasons:(unsigned long long)arg4;
- (id)initWithProactiveSuggestion:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXLightweightProactiveSuggestion:(id)arg1;
- (unsigned long long)predictionReasons;
- (id)proto;
- (id)scoreSpecification;
- (void)setConsumerSubType:(unsigned char)arg1;

@end
