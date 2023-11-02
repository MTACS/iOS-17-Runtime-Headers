
@interface GEOWalkingSupportedFeatures : PBCodable <NSCopying> {
    struct { 
        unsigned int has_supportsWalkingExperience2022 : 1; 
    }  _flags;
    bool  _supportsWalkingExperience2022;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSupportsWalkingExperience2022;
@property (nonatomic) bool supportsWalkingExperience2022;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSupportsWalkingExperience2022;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSupportsWalkingExperience2022:(bool)arg1;
- (void)setSupportsWalkingExperience2022:(bool)arg1;
- (bool)supportsWalkingExperience2022;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
