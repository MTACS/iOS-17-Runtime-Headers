
@interface SIRINLUINTERNALPreprocessingWrapper : PBCodable <NSCopying> {
    SIRINLUINTERNALEMBEDDINGEmbeddingResponse * _embeddingResponse;
    SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse * _mentionResolverResponse;
    SIRINLUINTERNALSPANMATCHSpanMatchResponse * _spanMatchResponse;
    SIRINLUINTERNALTOKENIZERTokenizerResponse * _tokenizerResponse;
}

@property (nonatomic, retain) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *embeddingResponse;
@property (nonatomic, readonly) bool hasEmbeddingResponse;
@property (nonatomic, readonly) bool hasMentionResolverResponse;
@property (nonatomic, readonly) bool hasSpanMatchResponse;
@property (nonatomic, readonly) bool hasTokenizerResponse;
@property (nonatomic, retain) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *mentionResolverResponse;
@property (nonatomic, retain) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;
@property (nonatomic, retain) SIRINLUINTERNALTOKENIZERTokenizerResponse *tokenizerResponse;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embeddingResponse;
- (bool)hasEmbeddingResponse;
- (bool)hasMentionResolverResponse;
- (bool)hasSpanMatchResponse;
- (bool)hasTokenizerResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mentionResolverResponse;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEmbeddingResponse:(id)arg1;
- (void)setMentionResolverResponse:(id)arg1;
- (void)setSpanMatchResponse:(id)arg1;
- (void)setTokenizerResponse:(id)arg1;
- (id)spanMatchResponse;
- (id)tokenizerResponse;
- (void)writeTo:(id)arg1;

@end
