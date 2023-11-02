
@interface GEOTransitRouteIdentifier : PBCodable <NSCopying> {
    NSData * _clientRouteHandle;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientRouteHandle : 1; 
        unsigned int read_serverRouteHandle : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _serverRouteHandle;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSData *clientRouteHandle;
@property (nonatomic, readonly) NSUUID *clientRouteID;
@property (nonatomic, readonly) bool hasClientRouteHandle;
@property (nonatomic, readonly) bool hasServerRouteHandle;
@property (nonatomic, retain) NSData *serverRouteHandle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (id)routeIdentiferForComposedRoute:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientRouteHandle;
- (id)clientRouteID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientRouteHandle;
- (bool)hasServerRouteHandle;
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
- (id)serverRouteHandle;
- (void)setClientRouteHandle:(id)arg1;
- (void)setServerRouteHandle:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
