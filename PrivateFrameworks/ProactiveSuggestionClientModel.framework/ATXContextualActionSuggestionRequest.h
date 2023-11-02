
@interface ATXContextualActionSuggestionRequest : ATXSuggestionRequest <ATXProtoBufWrapper, NSSecureCoding> {
    <ATXSuggestionExecutableProtocol> * _caxPredictionContext;
    unsigned long long  _maxSuggestions;
}

@property (nonatomic, readonly) <ATXSuggestionExecutableProtocol> *caxPredictionContext;
@property (nonatomic) unsigned long long maxSuggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivePredictionContext;
- (id)caxPredictionContext;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatorId:(id)arg1 consumerSubType:(unsigned char)arg2 caxPredictionContext:(id)arg3 maxSuggestions:(unsigned long long)arg4 timeout:(double)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUUID:(id)arg1 originatorId:(id)arg2 consumerSubType:(unsigned char)arg3 caxPredictionContext:(id)arg4 maxSuggestions:(unsigned long long)arg5 timeout:(double)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxSuggestions;
- (id)proto;
- (void)setMaxSuggestions:(unsigned long long)arg1;

@end
