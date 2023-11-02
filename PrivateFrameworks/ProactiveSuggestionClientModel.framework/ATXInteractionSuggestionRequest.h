
@interface ATXInteractionSuggestionRequest : ATXSuggestionRequest <ATXProtoBufWrapper, NSSecureCoding> {
    <ATXSuggestionExecutableProtocol> * _psPredictionContext;
}

@property (nonatomic, readonly) <ATXSuggestionExecutableProtocol> *psPredictionContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivePredictionContext;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatorId:(id)arg1 consumerSubType:(unsigned char)arg2 psPredictionContext:(id)arg3;
- (id)initWithOriginatorId:(id)arg1 consumerSubType:(unsigned char)arg2 psPredictionContext:(id)arg3 timeout:(double)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUUID:(id)arg1 originatorId:(id)arg2 consumerSubType:(unsigned char)arg3 psPredictionContext:(id)arg4 timeout:(double)arg5;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)psPredictionContext;

@end
