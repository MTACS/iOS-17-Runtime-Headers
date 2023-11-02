
@interface GEOPDETA : PBCodable <NSCopying> {
    unsigned int  _distance;
    NSMutableArray * _etaRouteIncidents;
    struct { 
        unsigned int has_distance : 1; 
        unsigned int has_historicTravelTime : 1; 
        unsigned int has_licensePlateRestrictionImpact : 1; 
        unsigned int has_time : 1; 
        unsigned int has_transportType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_etaRouteIncidents : 1; 
        unsigned int read_routeTrafficDetail : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _historicTravelTime;
    int  _licensePlateRestrictionImpact;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORouteTrafficDetail * _routeTrafficDetail;
    unsigned int  _time;
    int  _transportType;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
