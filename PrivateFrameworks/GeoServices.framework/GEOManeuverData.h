
@interface GEOManeuverData : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maneuverType : 1; 
    }  _flags;
    GEOJunctionInfo * _junctionInfo;
    int  _maneuverType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasJunctionInfo;
@property (nonatomic) bool hasManeuverType;
@property (nonatomic, retain) GEOJunctionInfo *junctionInfo;
@property (nonatomic) int maneuverType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsManeuverType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasJunctionInfo;
- (bool)hasManeuverType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)junctionInfo;
- (int)maneuverType;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasManeuverType:(bool)arg1;
- (void)setJunctionInfo:(id)arg1;
- (void)setManeuverType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
