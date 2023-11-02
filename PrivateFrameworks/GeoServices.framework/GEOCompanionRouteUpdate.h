
@interface GEOCompanionRouteUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int has_lastUpdated : 1; 
        unsigned int has_type : 1; 
        unsigned int read_routeID : 1; 
        unsigned int read_transitRouteUpdate : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _lastUpdated;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _routeID;
    GEOTransitRouteUpdate * _transitRouteUpdate;
    int  _type;
}

@property (nonatomic) bool hasLastUpdated;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic, readonly) bool hasTransitRouteUpdate;
@property (nonatomic) bool hasType;
@property (nonatomic) double lastUpdated;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) GEOTransitRouteUpdate *transitRouteUpdate;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastUpdated;
- (bool)hasRouteID;
- (bool)hasTransitRouteUpdate;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTransitRouteUpdate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)lastUpdated;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (void)setHasLastUpdated:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLastUpdated:(double)arg1;
- (void)setRouteID:(id)arg1;
- (void)setTransitRouteUpdate:(id)arg1;
- (void)setType:(int)arg1;
- (id)transitRouteUpdate;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
