
@interface GEOURLRouteHandle : PBCodable <NSCopying> {
    NSData * _directionsResponseID;
    struct { 
        unsigned int read_directionsResponseID : 1; 
        unsigned int read_routeID : 1; 
        unsigned int read_transitData : 1; 
        unsigned int read_zilchPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _routeID;
    NSData * _transitData;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, readonly) bool hasDirectionsResponseID;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic, readonly) bool hasTransitData;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) NSData *transitData;
@property (nonatomic, retain) NSData *zilchPoints;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (bool)hasDirectionsResponseID;
- (bool)hasRouteID;
- (bool)hasTransitData;
- (bool)hasZilchPoints;
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
- (id)routeID;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setTransitData:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)transitData;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
