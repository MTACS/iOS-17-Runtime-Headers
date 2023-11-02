
@interface GEOWaypointRouteFeatures : PBCodable <NSCopying> {
    bool  _avoidsHighways;
    bool  _avoidsTolls;
    bool  _avoidsTraffic;
    struct { 
        unsigned int has_avoidsHighways : 1; 
        unsigned int has_avoidsTolls : 1; 
        unsigned int has_avoidsTraffic : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool avoidsHighways;
@property (nonatomic) bool avoidsTolls;
@property (nonatomic) bool avoidsTraffic;
@property (nonatomic) bool hasAvoidsHighways;
@property (nonatomic) bool hasAvoidsTolls;
@property (nonatomic) bool hasAvoidsTraffic;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)avoidsHighways;
- (bool)avoidsTolls;
- (bool)avoidsTraffic;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvoidsHighways;
- (bool)hasAvoidsTolls;
- (bool)hasAvoidsTraffic;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidsHighways:(bool)arg1;
- (void)setAvoidsTolls:(bool)arg1;
- (void)setAvoidsTraffic:(bool)arg1;
- (void)setHasAvoidsHighways:(bool)arg1;
- (void)setHasAvoidsTolls:(bool)arg1;
- (void)setHasAvoidsTraffic:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
