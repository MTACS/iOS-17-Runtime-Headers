
@interface CDMEmbeddingProtoResponseCommand : CDMBaseCommand <NSSecureCoding> {
    CDMEmbeddingConfigs * _embeddingConfigs;
    SIRINLUINTERNALEMBEDDINGEmbeddingResponse * _response;
}

@property (nonatomic, readonly) CDMEmbeddingConfigs *embeddingConfigs;
@property (nonatomic, retain) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *response;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embeddingConfigs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1 embeddingConfigs:(id)arg2;
- (id)response;
- (void)setResponse:(id)arg1;

@end
