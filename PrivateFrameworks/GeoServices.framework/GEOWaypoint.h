
@interface GEOWaypoint : PBCodable <NSCopying> {
    NSMutableArray * _entryPoints;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_entryPoints : 1; 
        unsigned int read_location : 1; 
        unsigned int read_placeSearchRequest : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocation * _location;
    GEOPlaceSearchRequest * _placeSearchRequest;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entryPoints;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasPlaceSearchRequest;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, retain) GEOPlaceSearchRequest *placeSearchRequest;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entryPointType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryPoint:(id)arg1;
- (void)clearEntryPoints;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entryPointAtIndex:(unsigned long long)arg1;
- (id)entryPoints;
- (unsigned long long)entryPointsCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasPlaceSearchRequest;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchRequest;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntryPoints:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
