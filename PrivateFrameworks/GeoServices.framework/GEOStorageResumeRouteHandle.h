
@interface GEOStorageResumeRouteHandle : PBCodable <NSCopying> {
    struct { 
        unsigned int has_hasVisitedFirstStop : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_routeGeometry : 1; 
        unsigned int read_serverSessionState : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _hasVisitedFirstStop;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOOriginalWaypointRoute * _routeGeometry;
    NSData * _serverSessionState;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasHasVisitedFirstStop;
@property (nonatomic, readonly) bool hasRouteGeometry;
@property (nonatomic, readonly) bool hasServerSessionState;
@property (nonatomic) bool hasVisitedFirstStop;
@property (nonatomic, retain) GEOOriginalWaypointRoute *routeGeometry;
@property (nonatomic, retain) NSData *serverSessionState;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHasVisitedFirstStop;
- (bool)hasRouteGeometry;
- (bool)hasServerSessionState;
- (bool)hasVisitedFirstStop;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeGeometry;
- (id)serverSessionState;
- (void)setHasHasVisitedFirstStop:(bool)arg1;
- (void)setHasVisitedFirstStop:(bool)arg1;
- (void)setRouteGeometry:(id)arg1;
- (void)setServerSessionState:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
