
@interface GEOMeasurementData : PBCodable <NSCopying> {
    bool  _enableUnitScaling;
    struct { 
        unsigned int has_enableUnitScaling : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool enableUnitScaling;
@property (nonatomic) bool hasEnableUnitScaling;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableUnitScaling;
- (bool)hasEnableUnitScaling;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnableUnitScaling:(bool)arg1;
- (void)setHasEnableUnitScaling:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
