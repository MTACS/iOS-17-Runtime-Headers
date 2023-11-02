
@interface GEOPDPlaceSummaryLayoutUnitDistance : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maximumDistanceInMeters : 1; 
    }  _flags;
    unsigned long long  _maximumDistanceInMeters;
}

@property (nonatomic) bool hasMaximumDistanceInMeters;
@property (nonatomic) unsigned long long maximumDistanceInMeters;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaximumDistanceInMeters;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)maximumDistanceInMeters;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaximumDistanceInMeters:(bool)arg1;
- (void)setMaximumDistanceInMeters:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
