
@interface SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput : PBCodable <NSCopying> {
    unsigned long long  _embeddingDim;
    SIRINLUINTERNALNLv4EmbeddingTensor * _embeddingTensor;
    NSString * _embeddingVersion;
    struct { 
        unsigned int embeddingDim : 1; 
        unsigned int isStableEmbeddingsVersion : 1; 
    }  _has;
    bool  _isStableEmbeddingsVersion;
    SIRINLUINTERNALNLv4EmbeddingTensor * _sentenceEmbeddingTensor;
}

@property (nonatomic) unsigned long long embeddingDim;
@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (nonatomic, retain) NSString *embeddingVersion;
@property (nonatomic) bool hasEmbeddingDim;
@property (nonatomic, readonly) bool hasEmbeddingTensor;
@property (nonatomic, readonly) bool hasEmbeddingVersion;
@property (nonatomic) bool hasIsStableEmbeddingsVersion;
@property (nonatomic, readonly) bool hasSentenceEmbeddingTensor;
@property (nonatomic) bool isStableEmbeddingsVersion;
@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *sentenceEmbeddingTensor;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)embeddingDim;
- (id)embeddingTensor;
- (id)embeddingVersion;
- (bool)hasEmbeddingDim;
- (bool)hasEmbeddingTensor;
- (bool)hasEmbeddingVersion;
- (bool)hasIsStableEmbeddingsVersion;
- (bool)hasSentenceEmbeddingTensor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isStableEmbeddingsVersion;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sentenceEmbeddingTensor;
- (void)setEmbeddingDim:(unsigned long long)arg1;
- (void)setEmbeddingTensor:(id)arg1;
- (void)setEmbeddingVersion:(id)arg1;
- (void)setHasEmbeddingDim:(bool)arg1;
- (void)setHasIsStableEmbeddingsVersion:(bool)arg1;
- (void)setIsStableEmbeddingsVersion:(bool)arg1;
- (void)setSentenceEmbeddingTensor:(id)arg1;
- (void)writeTo:(id)arg1;

@end
