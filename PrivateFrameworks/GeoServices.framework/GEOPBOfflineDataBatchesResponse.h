
@interface GEOPBOfflineDataBatchesResponse : PBCodable <NSCopying> {
    NSMutableArray * _layerBatchs;
}

@property (nonatomic, retain) NSMutableArray *layerBatchs;

+ (bool)isValid:(id)arg1;
+ (Class)layerBatchType;

- (void).cxx_destruct;
- (void)addLayerBatch:(id)arg1;
- (void)clearLayerBatchs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)layerBatchAtIndex:(unsigned long long)arg1;
- (id)layerBatchs;
- (unsigned long long)layerBatchsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLayerBatchs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
