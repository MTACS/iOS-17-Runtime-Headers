
@interface GEOGenericInstruction : PBCodable <NSCopying> {
    NSString * _maneuver;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasManeuver;
@property (nonatomic, retain) NSString *maneuver;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasManeuver;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)maneuver;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setManeuver:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
