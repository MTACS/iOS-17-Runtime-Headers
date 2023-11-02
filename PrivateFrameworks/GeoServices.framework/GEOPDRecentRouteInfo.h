
@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {
    NSData * _etaFilter;
    NSData * _evChargingMetadata;
    struct { 
        unsigned int has_preferredTransportType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_etaFilter : 1; 
        unsigned int read_evChargingMetadata : 1; 
        unsigned int read_originalWaypointRoute : 1; 
        unsigned int read_routeId : 1; 
        unsigned int read_sessionState : 1; 
        unsigned int read_zilchPointSegments : 1; 
        unsigned int read_zilchPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSData * _originalWaypointRoute;
    int  _preferredTransportType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _routeId;
    NSData * _sessionState;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _zilchPointSegments;
    NSData * _zilchPoints;
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
