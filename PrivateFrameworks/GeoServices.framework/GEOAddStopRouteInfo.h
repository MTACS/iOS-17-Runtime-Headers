
@interface GEOAddStopRouteInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_originalWaypointRouteRepresentation : 1; 
        unsigned int read_routeAttributes : 1; 
        unsigned int read_routeId : 1; 
        unsigned int read_sessionState : 1; 
        unsigned int read_zilchData : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSData * _originalWaypointRouteRepresentation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORouteAttributes * _routeAttributes;
    NSData * _routeId;
    NSData * _sessionState;
    PBUnknownFields * _unknownFields;
    NSData * _zilchData;
}

@property (nonatomic, readonly) bool hasOriginalWaypointRouteRepresentation;
@property (nonatomic, readonly) bool hasRouteAttributes;
@property (nonatomic, readonly) bool hasRouteId;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic, readonly) bool hasZilchData;
@property (nonatomic, retain) NSData *originalWaypointRouteRepresentation;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) NSData *routeId;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSData *zilchData;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginalWaypointRouteRepresentation;
- (bool)hasRouteAttributes;
- (bool)hasRouteId;
- (bool)hasSessionState;
- (bool)hasZilchData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalWaypointRouteRepresentation;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeAttributes;
- (id)routeId;
- (id)sessionState;
- (void)setOriginalWaypointRouteRepresentation:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRouteId:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)setZilchData:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zilchData;

@end
