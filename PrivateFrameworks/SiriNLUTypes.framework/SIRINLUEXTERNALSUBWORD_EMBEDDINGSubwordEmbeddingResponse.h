
@interface SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse : PBCodable <NSCopying> {
    SIRINLUINTERNALSubwordTokenChain * _subwordTokenChain;
    SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput * _subwordTokenEmbedding;
}

@property (nonatomic, readonly) bool hasSubwordTokenChain;
@property (nonatomic, readonly) bool hasSubwordTokenEmbedding;
@property (nonatomic, retain) SIRINLUINTERNALSubwordTokenChain *subwordTokenChain;
@property (nonatomic, retain) SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput *subwordTokenEmbedding;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSubwordTokenChain;
- (bool)hasSubwordTokenEmbedding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSubwordTokenChain:(id)arg1;
- (void)setSubwordTokenEmbedding:(id)arg1;
- (id)subwordTokenChain;
- (id)subwordTokenEmbedding;
- (void)writeTo:(id)arg1;

@end
