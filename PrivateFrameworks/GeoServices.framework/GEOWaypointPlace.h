
@interface GEOWaypointPlace : PBCodable <NSCopying> {
    GEOLatLng * _center;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_center : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_roadAccessPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOMapRegion * _mapRegion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _roadAccessPoints;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSMutableArray *roadAccessPoints;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)roadAccessPointType;

- (void).cxx_destruct;
- (void)addRoadAccessPoint:(id)arg1;
- (id)center;
- (void)clearRoadAccessPoints;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapRegion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (id)roadAccessPoints;
- (unsigned long long)roadAccessPointsCount;
- (void)setCenter:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
