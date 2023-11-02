
@interface GEOVLFDeviceOrientation : PBCodable <NSCopying> {
    struct { 
        unsigned int has_orientation : 1; 
        unsigned int has_relativeTimestampMs : 1; 
    }  _flags;
    int  _orientation;
    unsigned int  _relativeTimestampMs;
}

@property (nonatomic) bool hasOrientation;
@property (nonatomic) bool hasRelativeTimestampMs;
@property (nonatomic) int orientation;
@property (nonatomic) unsigned int relativeTimestampMs;

+ (bool)isValid:(id)arg1;

- (int)StringAsOrientation:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOrientation;
- (bool)hasRelativeTimestampMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)orientation;
- (id)orientationAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)relativeTimestampMs;
- (void)setHasOrientation:(bool)arg1;
- (void)setHasRelativeTimestampMs:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)setRelativeTimestampMs:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
