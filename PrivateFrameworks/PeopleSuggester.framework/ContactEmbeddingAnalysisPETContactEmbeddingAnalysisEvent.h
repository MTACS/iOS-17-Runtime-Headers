
@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable <NSCopying> {
    NSString * _contactId;
    ContactEmbeddingAnalysisPETNeuralNetEmbedding * _embeddingsAfterActivation;
    ContactEmbeddingAnalysisPETNeuralNetEmbedding * _embeddingsBeforeActivation;
}

@property (nonatomic, retain) NSString *contactId;
@property (nonatomic, retain) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsAfterActivation;
@property (nonatomic, retain) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsBeforeActivation;

- (void).cxx_destruct;
- (id)contactId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embeddingsAfterActivation;
- (id)embeddingsBeforeActivation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactId:(id)arg1;
- (void)setEmbeddingsAfterActivation:(id)arg1;
- (void)setEmbeddingsBeforeActivation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
