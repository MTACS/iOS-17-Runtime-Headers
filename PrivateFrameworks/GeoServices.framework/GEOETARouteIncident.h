
@interface GEOETARouteIncident : PBCodable <NSCopying> {
    unsigned int  _distanceFromStartCm;
    struct { 
        unsigned int has_distanceFromStartCm : 1; 
    }  _flags;
    GEORouteIncident * _routeIncident;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int distanceFromStartCm;
@property (nonatomic) bool hasDistanceFromStartCm;
@property (nonatomic, readonly) bool hasRouteIncident;
@property (nonatomic, retain) GEORouteIncident *routeIncident;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceFromStartCm;
- (bool)hasDistanceFromStartCm;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRouteIncident;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeIncident;
- (void)setDistanceFromStartCm:(unsigned int)arg1;
- (void)setHasDistanceFromStartCm:(bool)arg1;
- (void)setRouteIncident:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
