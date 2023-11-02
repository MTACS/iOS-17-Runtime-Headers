
@interface GEOOriginalRoute : PBCodable <NSCopying> {
    struct { 
        unsigned int has_originalRoutePurpose : 1; 
        unsigned int has_routeIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_originalDirectionsResponseID : 1; 
        unsigned int read_routeHandle : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSData * _originalDirectionsResponseID;
    int  _originalRoutePurpose;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _routeHandle;
    unsigned int  _routeIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasOriginalDirectionsResponseID;
@property (nonatomic) bool hasOriginalRoutePurpose;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic) bool hasRouteIndex;
@property (nonatomic, retain) NSData *originalDirectionsResponseID;
@property (nonatomic) int originalRoutePurpose;
@property (nonatomic, retain) NSData *routeHandle;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginalDirectionsResponseID;
- (bool)hasOriginalRoutePurpose;
- (bool)hasRouteHandle;
- (bool)hasRouteIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalDirectionsResponseID;
- (int)originalRoutePurpose;
- (id)originalRoutePurposeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeHandle;
- (unsigned int)routeIndex;
- (void)setHasOriginalRoutePurpose:(bool)arg1;
- (void)setHasRouteIndex:(bool)arg1;
- (void)setOriginalDirectionsResponseID:(id)arg1;
- (void)setOriginalRoutePurpose:(int)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)setRouteIndex:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
