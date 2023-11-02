
@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying> {
    NSMutableArray * _significantLocations;
}

@property (nonatomic, retain) NSMutableArray *significantLocations;

+ (bool)isValid:(id)arg1;
+ (Class)significantLocationType;

- (void).cxx_destruct;
- (void)addSignificantLocation:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearSignificantLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setSignificantLocations:(id)arg1;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (id)significantLocations;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end
