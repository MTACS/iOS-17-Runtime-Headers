
@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable <NSCopying> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _embeddings;
}

@property (nonatomic, readonly) float*embeddings;
@property (nonatomic, readonly) unsigned long long embeddingsCount;

- (void)addEmbeddings:(float)arg1;
- (void)clearEmbeddings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float*)embeddings;
- (float)embeddingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)embeddingsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEmbeddings:(float*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
