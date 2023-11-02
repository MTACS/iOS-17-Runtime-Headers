
@interface SIRINLUINTERNALEMBEDDINGEmbeddingResponse : PBCodable <NSCopying> {
    unsigned long long  _embeddingDim;
    SIRINLUINTERNALNLv4EmbeddingTensor * _embeddingTensor;
    NSMutableArray * _embeddingTensorOutputs;
    struct { 
        unsigned int embeddingDim : 1; 
        unsigned int numLayer : 1; 
        unsigned int numSubwordToken : 1; 
        unsigned int numToken : 1; 
    }  _has;
    unsigned long long  _numLayer;
    unsigned long long  _numSubwordToken;
    unsigned long long  _numToken;
    SIRINLUINTERNALNLv4EmbeddingTensor * _sentenceEmbeddingTensor;
    NSMutableArray * _subwordEmbeddingTensorOutputs;
    SIRINLUINTERNALSubwordTokenChain * _subwordTokenChain;
    SIRINLUINTERNALTokenChain * _tokenChain;
}

@property (nonatomic) unsigned long long embeddingDim;
@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (nonatomic, retain) NSMutableArray *embeddingTensorOutputs;
@property (nonatomic) bool hasEmbeddingDim;
@property (nonatomic, readonly) bool hasEmbeddingTensor;
@property (nonatomic) bool hasNumLayer;
@property (nonatomic) bool hasNumSubwordToken;
@property (nonatomic) bool hasNumToken;
@property (nonatomic, readonly) bool hasSentenceEmbeddingTensor;
@property (nonatomic, readonly) bool hasSubwordTokenChain;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic) unsigned long long numLayer;
@property (nonatomic) unsigned long long numSubwordToken;
@property (nonatomic) unsigned long long numToken;
@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *sentenceEmbeddingTensor;
@property (nonatomic, retain) NSMutableArray *subwordEmbeddingTensorOutputs;
@property (nonatomic, retain) SIRINLUINTERNALSubwordTokenChain *subwordTokenChain;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;

+ (Class)embeddingTensorOutputsType;
+ (Class)subwordEmbeddingTensorOutputsType;

- (void).cxx_destruct;
- (void)addEmbeddingTensorOutputs:(id)arg1;
- (void)addSubwordEmbeddingTensorOutputs:(id)arg1;
- (void)clearEmbeddingTensorOutputs;
- (void)clearSubwordEmbeddingTensorOutputs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)embeddingDim;
- (id)embeddingTensor;
- (id)embeddingTensorOutputs;
- (id)embeddingTensorOutputsAtIndex:(unsigned long long)arg1;
- (unsigned long long)embeddingTensorOutputsCount;
- (bool)hasEmbeddingDim;
- (bool)hasEmbeddingTensor;
- (bool)hasNumLayer;
- (bool)hasNumSubwordToken;
- (bool)hasNumToken;
- (bool)hasSentenceEmbeddingTensor;
- (bool)hasSubwordTokenChain;
- (bool)hasTokenChain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numLayer;
- (unsigned long long)numSubwordToken;
- (unsigned long long)numToken;
- (bool)readFrom:(id)arg1;
- (id)sentenceEmbeddingTensor;
- (void)setEmbeddingDim:(unsigned long long)arg1;
- (void)setEmbeddingTensor:(id)arg1;
- (void)setEmbeddingTensorOutputs:(id)arg1;
- (void)setHasEmbeddingDim:(bool)arg1;
- (void)setHasNumLayer:(bool)arg1;
- (void)setHasNumSubwordToken:(bool)arg1;
- (void)setHasNumToken:(bool)arg1;
- (void)setNumLayer:(unsigned long long)arg1;
- (void)setNumSubwordToken:(unsigned long long)arg1;
- (void)setNumToken:(unsigned long long)arg1;
- (void)setSentenceEmbeddingTensor:(id)arg1;
- (void)setSubwordEmbeddingTensorOutputs:(id)arg1;
- (void)setSubwordTokenChain:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (id)subwordEmbeddingTensorOutputs;
- (id)subwordEmbeddingTensorOutputsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subwordEmbeddingTensorOutputsCount;
- (id)subwordTokenChain;
- (id)tokenChain;
- (void)writeTo:(id)arg1;

@end
