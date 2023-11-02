
@interface GEOLogMsgEventNetworkSelectionHarvest : PBCodable <NSCopying> {
    NSData * _harvestData;
}

@property (nonatomic, retain) NSData *harvestData;
@property (nonatomic, readonly) bool hasHarvestData;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)harvestData;
- (bool)hasHarvestData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHarvestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
