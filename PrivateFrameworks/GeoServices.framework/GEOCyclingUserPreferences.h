
@interface GEOCyclingUserPreferences : PBCodable <NSCopying> {
    bool  _avoidBusyRoads;
    bool  _avoidHills;
    bool  _avoidStairs;
    struct { 
        unsigned int has_avoidBusyRoads : 1; 
        unsigned int has_avoidHills : 1; 
        unsigned int has_avoidStairs : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool avoidBusyRoads;
@property (nonatomic) bool avoidHills;
@property (nonatomic) bool avoidStairs;
@property (nonatomic) bool hasAvoidBusyRoads;
@property (nonatomic) bool hasAvoidHills;
@property (nonatomic) bool hasAvoidStairs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)avoidBusyRoads;
- (bool)avoidHills;
- (bool)avoidStairs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvoidBusyRoads;
- (bool)hasAvoidHills;
- (bool)hasAvoidStairs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidBusyRoads:(bool)arg1;
- (void)setAvoidHills:(bool)arg1;
- (void)setAvoidStairs:(bool)arg1;
- (void)setHasAvoidBusyRoads:(bool)arg1;
- (void)setHasAvoidHills:(bool)arg1;
- (void)setHasAvoidStairs:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
