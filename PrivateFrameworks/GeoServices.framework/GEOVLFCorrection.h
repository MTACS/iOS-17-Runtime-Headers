
@interface GEOVLFCorrection : PBCodable <NSCopying> {
    unsigned int  _altitudeCorrectionMagnitude;
    struct { 
        unsigned int has_altitudeCorrectionMagnitude : 1; 
        unsigned int has_headingCorrectionMagnitude : 1; 
        unsigned int has_locationCorrectionMagnitude : 1; 
    }  _flags;
    unsigned int  _headingCorrectionMagnitude;
    unsigned int  _locationCorrectionMagnitude;
}

@property (nonatomic) unsigned int altitudeCorrectionMagnitude;
@property (nonatomic) bool hasAltitudeCorrectionMagnitude;
@property (nonatomic) bool hasHeadingCorrectionMagnitude;
@property (nonatomic) bool hasLocationCorrectionMagnitude;
@property (nonatomic) unsigned int headingCorrectionMagnitude;
@property (nonatomic) unsigned int locationCorrectionMagnitude;

+ (bool)isValid:(id)arg1;

- (unsigned int)altitudeCorrectionMagnitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitudeCorrectionMagnitude;
- (bool)hasHeadingCorrectionMagnitude;
- (bool)hasLocationCorrectionMagnitude;
- (unsigned long long)hash;
- (unsigned int)headingCorrectionMagnitude;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)locationCorrectionMagnitude;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltitudeCorrectionMagnitude:(unsigned int)arg1;
- (void)setHasAltitudeCorrectionMagnitude:(bool)arg1;
- (void)setHasHeadingCorrectionMagnitude:(bool)arg1;
- (void)setHasLocationCorrectionMagnitude:(bool)arg1;
- (void)setHeadingCorrectionMagnitude:(unsigned int)arg1;
- (void)setLocationCorrectionMagnitude:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
