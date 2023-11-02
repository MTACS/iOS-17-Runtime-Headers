
@interface GEOETAResult : PBCodable <NSCopying> {
    unsigned int  _distance;
    NSMutableArray * _etaRouteIncidents;
    struct { 
        unsigned int has_distance : 1; 
        unsigned int has_historicTravelTime : 1; 
        unsigned int has_liveTravelTime : 1; 
        unsigned int has_status : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_etaRouteIncidents : 1; 
        unsigned int read_placeSearchResponse : 1; 
        unsigned int read_sortedETAs : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _historicTravelTime;
    unsigned int  _liveTravelTime;
    GEOPlaceSearchResponse * _placeSearchResponse;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _sortedETAs;
    int  _status;
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
