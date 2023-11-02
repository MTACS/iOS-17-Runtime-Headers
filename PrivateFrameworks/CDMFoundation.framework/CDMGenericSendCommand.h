
@interface CDMGenericSendCommand : CDMServiceGraphCommand {
    CDMNluResponse * _cdmNluResponse;
    NSString * _clientId;
    CDMEmbeddingGraphResponseCommand * _embeddingResponse;
    SIRINLUResponse * _nluResponse;
    SIRINLUINTERNALPreprocessingWrapper * _preprocessingWrapper;
    CDMSsuInferenceGraphResponseCommand * _ssuInferenceResponse;
    SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse * _subwordEmbeddingResponse;
}

@property (nonatomic, readonly) CDMNluResponse *cdmNluResponse;
@property (nonatomic, readonly) NSString *clientId;
@property (nonatomic, readonly) CDMEmbeddingGraphResponseCommand *embeddingResponse;
@property (nonatomic, readonly) SIRINLUResponse *nluResponse;
@property (nonatomic, readonly) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;
@property (nonatomic, readonly) CDMSsuInferenceGraphResponseCommand *ssuInferenceResponse;
@property (nonatomic, readonly) SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse *subwordEmbeddingResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cdmNluResponse;
- (id)clientId;
- (id)embeddingResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCDMNluResponse:(id)arg1 clientId:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmbeddingGraphResponse:(id)arg1;
- (id)initWithError:(id)arg1 clientId:(id)arg2;
- (id)initWithPreprocessingWrapper:(id)arg1 clientId:(id)arg2;
- (id)initWithSsuInferenceGraphResponse:(id)arg1;
- (id)initWithSubwordEmbeddingResponse:(id)arg1 clientId:(id)arg2;
- (id)nluResponse;
- (id)preprocessingWrapper;
- (id)ssuInferenceResponse;
- (id)subwordEmbeddingResponse;

@end
