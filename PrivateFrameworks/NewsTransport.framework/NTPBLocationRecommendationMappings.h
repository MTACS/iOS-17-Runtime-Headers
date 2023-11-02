
@interface NTPBLocationRecommendationMappings : PBCodable <NSCopying> {
    NSMutableArray * _locationMappings;
}

@property (nonatomic, retain) NSMutableArray *locationMappings;

+ (Class)locationMappingsType;

- (void).cxx_destruct;
- (void)addLocationMappings:(id)arg1;
- (void)clearLocationMappings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationMappings;
- (id)locationMappingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationMappingsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocationMappings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
