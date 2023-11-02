
@interface GEOChargingNetworkInfo : PBCodable <NSCopying> {
    NSMutableArray * _brandInfoMappings;
}

@property (nonatomic, retain) NSMutableArray *brandInfoMappings;

+ (Class)brandInfoMappingType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addBrandInfoMapping:(id)arg1;
- (id)brandInfoMappingAtIndex:(unsigned long long)arg1;
- (id)brandInfoMappings;
- (unsigned long long)brandInfoMappingsCount;
- (void)clearBrandInfoMappings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBrandInfoMappings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
