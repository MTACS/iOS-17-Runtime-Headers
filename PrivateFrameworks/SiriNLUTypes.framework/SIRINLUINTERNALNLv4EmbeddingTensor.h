
@interface SIRINLUINTERNALNLv4EmbeddingTensor : PBCodable <NSCopying> {
    NSString * _embedderId;
    unsigned long long  _embeddingDim;
    struct { 
        unsigned int embeddingDim : 1; 
        unsigned int numLayer : 1; 
        unsigned int numToken : 1; 
    }  _has;
    unsigned long long  _numLayer;
    unsigned long long  _numToken;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic, retain) NSString *embedderId;
@property (nonatomic) unsigned long long embeddingDim;
@property (nonatomic, readonly) bool hasEmbedderId;
@property (nonatomic) bool hasEmbeddingDim;
@property (nonatomic) bool hasNumLayer;
@property (nonatomic) bool hasNumToken;
@property (nonatomic) unsigned long long numLayer;
@property (nonatomic) unsigned long long numToken;
@property (nonatomic, readonly) float*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

- (void).cxx_destruct;
- (void)addValues:(float)arg1;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embedderId;
- (unsigned long long)embeddingDim;
- (bool)hasEmbedderId;
- (bool)hasEmbeddingDim;
- (bool)hasNumLayer;
- (bool)hasNumToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numLayer;
- (unsigned long long)numToken;
- (bool)readFrom:(id)arg1;
- (void)setEmbedderId:(id)arg1;
- (void)setEmbeddingDim:(unsigned long long)arg1;
- (void)setHasEmbeddingDim:(bool)arg1;
- (void)setHasNumLayer:(bool)arg1;
- (void)setHasNumToken:(bool)arg1;
- (void)setNumLayer:(unsigned long long)arg1;
- (void)setNumToken:(unsigned long long)arg1;
- (void)setValues:(float*)arg1 count:(unsigned long long)arg2;
- (float*)values;
- (float)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
